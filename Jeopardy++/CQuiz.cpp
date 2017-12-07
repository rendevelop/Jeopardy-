#include "CQuiz.h"


CQuiz::CQuiz() {};


CQuiz::CQuiz(CQuiz *another) {
	if (another == 0) return;

	this->title = another->title;

	if (questions != 0) questions->clear();

	// copy questions from another
	for (auto itr = another->questions->begin(); itr != another->questions->end(); ++itr)
	{
		questions->push_back(*itr);
	}
}

CQuiz::~CQuiz() {
	if (questions != 0)
	{
		delete questions;
		questions = nullptr;
	}
}


int CQuiz::getNumOfQuestions() {
	return questions->size();
}


CQuestion CQuiz::getQuestion(int index) {
	auto it = questions->begin();
	advance(it, index);
	return *it;
}

void CQuiz::addQuestion(CQuestion question) {
	questions->push_back(question);
}


void CQuiz::removeQuestion(int index) {
	auto it = questions->begin();
	advance(it, index);
	questions->erase(it);
}


void CQuiz::updateQuestion(int index, CQuestion question) {
	auto it = questions->begin();
	advance(it, index);
	*it = question;
}


string CQuiz::toString() {
	string str = title + '\n';
	for (auto itr = questions->begin(); itr != questions->end(); ++itr)
	{
		str += itr->toString() + '\n\n';
	}
	return str;
}


string CQuiz::getTitle() {
	return title;
}


void CQuiz::setTitle(string title) {
	this->title = title;
}