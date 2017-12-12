
#ifndef _CQUIZ_H
#define _CQUIZ_H

#include "CQuestion.h"
#include<string>
#include <list>

using namespace std;

class CQuiz
{
private:
	list<CQuestion> *questions;
	list<string> categories;
	string title;

public:
	CQuiz();
	CQuiz(CQuiz *another);
	~CQuiz();
	int getNumOfQuestions();
	CQuestion getQuestion(int index);
	void addQuestion(CQuestion question);
	void removeQuestion(int index);
	void updateQuestion(int index, CQuestion question);
	string toString();
	string getTitle();
	void setTitle(string title);

};

#endif