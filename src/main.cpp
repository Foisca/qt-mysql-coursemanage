#include <QApplication>
#include <QPushButton>


#include "../include/loginwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    LoginWindow lw;
    lw.show();
    return QApplication::exec();
}
