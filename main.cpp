#include "snake.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    Snake w;

    w.setWindowTitle("Snake");
    w.show();

    return a.exec();
}
