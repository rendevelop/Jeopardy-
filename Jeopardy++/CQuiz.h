
#ifndef _CQUIZ_H
#define _CQUIZ_H

#include "CQuestion.h"
#include<string>
#include <list>



class CQuiz
{
private:
	std::list<CQuestion> *questions;
	std::list<std::string> categories;
	std::string title;

public:
	CQuiz();
	CQuiz(CQuiz *another);
	~CQuiz();
	int getNumOfQuestions();
	CQuestion getQuestion(int index);
	void addQuestion(CQuestion question);
	void removeQuestion(int index);
	void updateQuestion(int index, CQuestion question);
	std::string toString();
	std::string getTitle();
	void setTitle(std::string title);

};

#endif