#ifndef NOTE_H
#define NOTE_H
#include<QApplication>
#include<QTimer>
#include<QPixmap>
#include<QLabel>
#include<QPropertyAnimation>
#include<QObject>

const int leftPadding=320;
const int noteWidth=160;
const int noteHeight=50;
const int laneLength=650;
const int laneWidth=160;
const int windowHeight=800;

class Note:public QObject{
    Q_OBJECT
public:
    int lane; //轨道 1,2,3,4
    int moveTime; //应该移动时的毫秒数
    QLabel* note; //实体
    QPropertyAnimation note_drop; //移动动画
    bool judged;
    int judgement;

    Note(QWidget* gameWindow,int duration,int _moveTime,int _lane);
    void startMove();
    void reset(int _lane,int _moveTime);
    ~Note();
};

#endif // NOTE_H
