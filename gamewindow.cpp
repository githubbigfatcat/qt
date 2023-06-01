#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <note.h>

GameWindow::GameWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    //调试内容
    Note* p=new Note(this,3000,0,1);
//    Note* pp=new Note(this,3000,0,2);
//    Note* ppp=new Note(this,3000,0,3);
//    Note* pppp=new Note(this,3000,0,4);
//    p->startMove();
//    pp->startMove();
//    ppp->startMove();
//    pppp->startMove();
    //调试内容
}

GameWindow::~GameWindow()
{
    delete ui;
}

