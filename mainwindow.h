#ifndef MAINWINDOW_H//make sure main libraries not loaded 2x
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
/* <QPrinter>, <QPrintDialog> */
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }//ui namespace tied to .ui file
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    //Q_OBJECT is base class for all qt objects.
    //Q_OBJECTs handle events
//each Q_OBJECT executes on own thread. can handle events.
public:
    MainWindow(QWidget *parent = nullptr);//calls constructor, *parent=nullptr means widget has no parent
    ~MainWindow();//destructor

private:
    Ui::MainWindow *ui;//pointer to ui class
    QString currentFile = "";//string for filename.
};
#endif // MAINWINDOW_H
