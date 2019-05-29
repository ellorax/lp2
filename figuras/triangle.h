#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figura.h"
#include "mainwindow.h"
using namespace std;

class triangle:public figura
{
private:

public:
    void draw(QPainter * painter);
};

#endif 
