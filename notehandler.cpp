#include<note.h>
#include<notehandler.h>

int DURATION=3000; //TODO:在设置好速度相关的类之后需要通过计算得出

NoteHandler::NoteHandler(QWidget* _gameWindow,int* _moveTimeArr,int* _laneArr,int total){
   gameWindow=_gameWindow;
   totalNotes=total;
   for(int i=0;i<total;i++){
       moveTimeArr[i]=_moveTimeArr[i];
       laneArr[i]=_laneArr[i];
   }
   //开始设置handledNotes
   if(total>=maxNoteNum) handledNotesNum=maxNoteNum;
   else if(total<maxNoteNum&&total>=0) handledNotesNum=total;
   nextIndex=handledNotesNum;
   for(int i=0;i<handledNotesNum;i++){
       handledNotes.push(new Note(gameWindow,DURATION,moveTimeArr[i],laneArr[i]));
   }
}

NoteHandler::~NoteHandler(){
   while(!handledNotes.empty()){
       Note* curNote=handledNotes.front();
       delete curNote;
       handledNotes.pop();
   }
   while(!notePool.empty()){
       Note* curNote=notePool.top();
       delete curNote;
       notePool.pop();
   }
}

void NoteHandler::startHandle(){

}
