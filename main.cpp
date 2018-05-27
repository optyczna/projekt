#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //obiekt klasy QApplication, potrzebny do działania niemal wszystkich programów QT
    Notepad w; //obiekt klasy notepad
    w.show(); //pokazuje widget w nowym oknie

    return a.exec();
}
