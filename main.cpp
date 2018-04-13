#include <QApplication>
#include "slider.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Slider slider;
    slider.show();

    return a.exec();
}
