/**
 * Project Untitled
 */


#ifndef _JEOPARDYGAME_H
#define _JEOPARDYGAME_H

#include "CGame.h"


class JeopardyGame: public CGame {
public: 
	JeopardyGame(CQuiz * quiz, int gameType, int temptLimit, int rows, int cols, string colHeadings);

    int getRows();
    int getCols();
    void setRows(int rows);
    void setCols(int cols);  
    string getColHeadings();
    void setColHeadings(string colHeadings);

private: 
    int rows;
    int cols;
    string colHeadings;
};

#endif //_JEOPARDYGAME_H