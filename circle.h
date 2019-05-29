#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figura.h"
#include "mainwindow.h"
using namespace std;

class circle:public figura
{
private:

public:
    void draw(QPainter * painter);
};

#endif
