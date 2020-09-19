#include "mainwindow.h"//header file that defines classes.

#include <QApplication>//handles widgets, event handling, mouse movement

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);//create app object
    MainWindow w;
    w.show();//shows main app on screen.
    return a.exec();//put app into loop in which events are handled
}
