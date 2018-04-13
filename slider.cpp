#include "slider.hpp"

Slider::Slider(QWidget *parent) :
    QWidget(parent),
    mMin(0),
    mMax(100),
    mSinglestep(1) {

    mSpinBox = new QSpinBox(this);
    mSpinBox->setMinimum(mMin);
    mSpinBox->setMaximum(mMax);
    mSpinBox->setSingleStep(mSinglestep);


    mSlider = new QSlider(this);
    mSlider->setOrientation(Qt::Horizontal);
    mSlider->setMinimum(mMin);
    mSlider->setMaximum(mMax);
    mSlider->setSingleStep(mSinglestep);

    connect(mSpinBox,SIGNAL(valueChanged(int)),mSlider,SLOT(setValue(int)));
    connect(mSlider,SIGNAL(valueChanged(int)),mSpinBox,SLOT(setValue(int)));

    mSpinBox->setValue(0);

    mLayout = new QHBoxLayout();
    mLayout->addWidget(mSpinBox);
    mLayout->addWidget(mSlider);

    setLayout(mLayout);
    resize(400,200);
    setWindowTitle("QSlider");

}
