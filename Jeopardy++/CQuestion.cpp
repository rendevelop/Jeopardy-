
#include "CQuestion.h"
#include <iostream>


CQuestion::CQuestion(string title, int points) 
{
	this->title = title;
	this->points = points;
}

CQuestion::CQuestion(CQuestion *another)
{
	if (another == 0) return;

	this->title = another->title;
	this->ID = another->ID;
	this->points = another->points;
	this->answer = another->answer;
	this->conceptID = another->conceptID;
	this->description = another->description;
	this->explanation = another->explanation;
	this->questionType = another->questionType;
	this->options = another->options;
}
CQuestion::~CQuestion() {};

string CQuestion::getTitle()
{
	return title;
}

void CQuestion::setTitle(string title)
{
	this->title = title;
}

string CQuestion::getDescription()
{
	return description;
}

void CQuestion::setDescription(string desc)
{
	this->description = desc;
}

int CQuestion::getNumOfOption()
{
	return options.size();
}

string CQuestion::getOption(int index)
{
	auto itr = options.begin();
	advance(itr, index);
	return *itr;
}

void CQuestion::addOption(string option)
{
	options.push_back(option);
}

void CQuestion::setOption(int index, string option)
{
	auto itr = options.begin();
	advance(itr, index);
	options.insert(itr, option);
}

string CQuestion::getAnswer()
{
	return answer;
}

void CQuestion::setAnswer(string answer)
{
	this->answer = answer;
}

int CQuestion::getPoints()
{
	return points;
}

void CQuestion::setPoints(int points)
{
	this->points = points;
}

string CQuestion::getExplanation()
{
	return explanation;
}

void CQuestion::setExplanation(string expl)
{
	this->explanation = expl;
}

int CQuestion::getQuestionType()
{
	return questionType;
}

void CQuestion::setQuestionType(int type)
{
	questionType = type;
}

void CQuestion::operator=(CQuestion *another)
{
	CQuestion(another);
}

string CQuestion::toString()
{
	// TODO convert ID, conceptID, and questionType to string
	string str = "Question Title: " + title + '\n'
		+ "Question Description: " + description + '\n'
		+ "Question ID: " + ID + '\n'
		+ "Question Points: " + points + '\n'
		+ "Question Concept ID: " + conceptID + '\n'
		+ "Question Explanation: " + explanation + '\n'
		+ "Question Type: " + questionType + '\n'
		+ "Question Options: \n";

	for (auto itr = options.begin(); itr != options.end(); ++itr)
	{
		str += *itr + '\n';
	}

	return str;
}

bool CQuestion::isEqual(CQuestion question)
{
	bool equal = true;

	if (this->title != question.getTitle()
		|| this->ID != question.getID()
		|| this->conceptID != question.getConceptID())
		equal = false;

	return equal;
}
string CQuestion::getConceptID()
{
	return conceptID;
}

void CQuestion::setConceptID(string concept)
{
	this->conceptID = concept;
}

int CQuestion::getID()
{
	return ID;
}

void CQuestion::setID(int id)
{
	this->ID = id;
}
