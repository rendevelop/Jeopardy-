/**
 * Project Untitled
 */


#ifndef _CGAME_H
#define _CGAME_H

#include "CQuiz.h"

class CGame {
public: 
	CGame();
    CGame(CQuiz * quiz, int gameType, int temptLimit);
    
    int getGameType();
    void setGameType(int gameType);
    int getTemptLimit();
    void setTemptLimit(int temptLimit);
    CQuiz * getQuiz();
    void setQuiz(CQuiz * quiz);

private: 
    int gameType;
    int temptLimit;
    CQuiz * quiz;
};

#endif //_CGAME_H