/**
 * Project Untitled
 */


#include "CAssessUnit.h"

CAssessUnit::CAssessUnit() {};

CAssessUnit::CAssessUnit(CQuestion question)
{
	this->question = question;
}

CAssessUnit::CAssessUnit(CAssessUnit * another) {
	if (another == 0) return;

	this->question = another->question;
	this->answer = another->answer;
	this->score = another->score;
}

void CAssessUnit::operator=(CAssessUnit * another) {
	CAssessUnit(another);
}

CQuestion CAssessUnit::getQuestion() {
    return question;
}

void CAssessUnit::setQuestion(CQuestion question) {
	this->question = question;
}

double CAssessUnit::getScore() {
	return score;
}

void CAssessUnit::setScore(double score) {
	this->score = score;
}

string CAssessUnit::getAnswer() {
	return answer;
}

void CAssessUnit::setAnswer(string answer) {
	this->answer = answer;
}