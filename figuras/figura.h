#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "mainwindow.h"
using namespace std;

class figura:public MainWindow{
protected:

public:
    virtual void draw(QPainter * painter)=0;
};


#endif 
