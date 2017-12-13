
#ifndef _CQUESTION_H
#define _CQUESTION_H

#include<iostream>
#include<list>



class CQuestion {

private: 
	std::string title;
	std::string description;
	std::list<std::string> options;
	std::string answer;
	int points;
	std::string explanation;
	int questionType;
	std::string conceptID;
	int ID;

public:
	CQuestion();
	CQuestion(std::string title, int points);
	CQuestion(CQuestion *another);
	~CQuestion();
	std::string getTitle();
	void setTitle(std::string title);
	std::string getDescription();
	void setDescription(std::string desc);
	size_t getNumOfOption();
	std::string getOption(int index);
	void addOption(std::string option);
	void setOption(int index, std::string option);
	std::string getAnswer();
	void setAnswer(std::string answer);
	int getPoints();
	void setPoints(int points);
	std::string getExplanation();
	void setExplanation(std::string expl);
	int getQuestionType();
	void setQuestionType(int type);
	void operator=(CQuestion *another);
	std::string toString();
	bool isEqual(CQuestion question);
	std::string getConceptID();
	void setConceptID(std::string concept);
	int getID();
	void setID(int id);

};
#endif