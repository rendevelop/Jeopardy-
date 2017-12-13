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
    std::string getAnswer();
    void setAnswer(std::string answer);

private: 
    CQuestion question;
    double score;
    std::string answer;
};

#endif //_CASSESSUNIT_H