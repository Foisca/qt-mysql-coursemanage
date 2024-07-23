cmake_minimum_required(VERSION 3.28)
project(QtMySQL)

set(CMAKE_INCLUDE_CURRENT_DIR ON)# 其实只要这一条就够了，后面两条似乎也可以。


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(${CMAKE_BINARY_PATH})
include_directories(${CMAKE_CURRENT_BINRAY_PATH})


list(APPEND CMAKE_AUTOUIC_SEARCH_PATHS "ui")


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        sql
        REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

FILE(GLOB UI "ui/*.ui")
FILE(GLOB INC "include/*.h")
FILE(GLOB SRC "src/*.cpp")

add_executable(QtMySQL
        ${UI}
        ${INC}
        ${SRC}
        icon.rc
)

target_link_libraries(QtMySQL
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt${QT_VERSION_MAJOR}::Sql
)

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()


