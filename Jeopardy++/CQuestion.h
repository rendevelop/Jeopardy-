
#ifndef _CQUESTION_H
#define _CQUESTION_H

#include<iostream>
#include<list>

using namespace std;

class CQuestion {

private: 
	string title;
	string description;
	list<string> options;
	string answer;
	int points;
	string explanation;
	int questionType;
	string conceptID;
	int ID;

public:
	CQuestion();
	CQuestion(string title, int points);
	CQuestion(CQuestion *another);
	~CQuestion();
	string getTitle();
	void setTitle(string title);
	string getDescription();
	void setDescription(string desc);
	int getNumOfOption();
	string getOption(int index);
	void addOption(string option);
	void setOption(int index, string option);
	string getAnswer();
	void setAnswer(string answer);
	int getPoints();
	void setPoints(int points);
	string getExplanation();
	void setExplanation(string expl);
	int getQuestionType();
	void setQuestionType(int type);
	void operator=(CQuestion *another);
	string toString();
	bool isEqual(CQuestion question);
	string getConceptID();
	void setConceptID(string concept);
	int getID();
	void setID(int id);

};
#endif