/**
 * Project Untitled
 */


#ifndef _CASSESSUNIT_H
#define _CASSESSUNIT_H

#include "CQuestion.h"

class CAssessUnit {
public: 
	CAssessUnit();
    CAssessUnit(CQuestion question);
    CAssessUnit(CAssessUnit * another);

    void operator=(CAssessUnit * another);
    CQuestion getQuestion();
    void setQuestion(CQuestion question);
    double getScore();
    void setScore(double score);
    string getAnswer();
    void setAnswer(string answer);

private: 
    CQuestion question;
    double score;
    string answer;
};

#endif //_CASSESSUNIT_H