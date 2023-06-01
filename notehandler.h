#ifndef NOTEHANDLER_H
#define NOTEHANDLER_H
#include<note.h>
#include<stack>
#include<queue>
const int maxNoteNum=100;

class NoteHandler:public QObject{ //完成startHandle
    Q_OBJECT
public:
    QWidget* gameWindow;
    int totalNotes;
    int nextIndex;
    int handledNotesNum;
    int* moveTimeArr;
    int* laneArr;
    std::queue<Note*> handledNotes;
    std::stack<Note*> notePool;
    NoteHandler(QWidget* _gameWindow,int* _moveTimeArr,int* _laneArr,int total);
    ~NoteHandler();
    void startHandle(); //作用:管理和调用有限的已有note，在特定的时候释放note，在-判定结束-之后回收note
};


#endif // NOTEHANDLER_H
