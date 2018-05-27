#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QIODevice>
#include <QMessageBox>
#include <QTextStream>
#include <QtPrintSupport/QPrintDialog>
#include <QPrintDialog>
#include <QDialog>
#include <QtPrintSupport/QPrinter>
namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT //zawsze jako pierwsze w deklaracji klasy, deklaruje klasę jako obiekt Q

public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();

private slots:
    
    void on_actionNew_triggered();
    
    void on_actionOpen_triggered();
    
    void on_actionSave_triggered();
    
    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;
};

#endif // NOTEPAD_

