#ifndef SLIDER_HPP
#define SLIDER_HPP

#include <QGroupBox>
#include <QSlider>
#include <QSpinBox>
#include <QScrollBar>
#include <QHBoxLayout>

class Slider : public QWidget
{
    Q_OBJECT
public:
    Slider(QWidget *parent = 0);

signals:
    void valueChanged(int value);

public slots:

private:
    int mMin;
    int mMax;
    int mSinglestep;
    QSlider *mSlider;
    QSpinBox *mSpinBox;
    QHBoxLayout *mLayout;
};

#endif // SLIDER_HPP
