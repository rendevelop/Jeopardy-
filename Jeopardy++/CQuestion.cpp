
#include "CQuestion.h"
#include <iostream>
#include <sstream>

CQuestion::CQuestion()
{
}

CQuestion::CQuestion(std::string title, int points)
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

std::string CQuestion::getTitle()
{
	return title;
}

void CQuestion::setTitle(std::string title)
{
	this->title = title;
}

std::string CQuestion::getDescription()
{
	return description;
}

void CQuestion::setDescription(std::string desc)
{
	this->description = desc;
}

size_t CQuestion::getNumOfOption()
{
	return options.size();
}

std::string CQuestion::getOption(int index)
{
	auto itr = options.begin();
	advance(itr, index);
	return *itr;
}

void CQuestion::addOption(std::string option)
{
	options.push_back(option);
}

void CQuestion::setOption(int index, std::string option)
{
	auto itr = options.begin();
	advance(itr, index);
	options.insert(itr, option);
}

std::string CQuestion::getAnswer()
{
	return answer;
}

void CQuestion::setAnswer(std::string answer)
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

std::string CQuestion::getExplanation()
{
	return explanation;
}

void CQuestion::setExplanation(std::string expl)
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
	CQuestion::CQuestion(another);
}

std::string CQuestion::toString()
{
	// TODO convert ID, conceptID, and questionType to std::string
	std::ostringstream ss;
	ss << ID;
	std::string ID = ss.str();
	ss.str(std::string(""));
	ss.clear();
	ss << points;
	std::string points = ss.str();
	ss.str(std::string(""));
	ss.clear();
	ss << questionType;
	std::string questionType = ss.str();


	std::string str = "Question Title: " + title + '\n'
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
std::string CQuestion::getConceptID()
{
	return conceptID;
}

void CQuestion::setConceptID(std::string concept)
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
