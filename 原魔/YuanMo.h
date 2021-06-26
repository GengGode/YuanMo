#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_YuanMo.h"

class YuanMo : public QMainWindow
{
    Q_OBJECT

public:
    YuanMo(QWidget *parent = Q_NULLPTR);

private:
    Ui::YuanMoClass ui;
};
