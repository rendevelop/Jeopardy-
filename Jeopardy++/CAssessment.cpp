/**
* Project Untitled
*/

#include "CAssessment.h"
#include <string>

using namespace std;

/**
* CAssessment implementation
*/


CAssessment::CAssessment(CStudent *student)
{
	this->student = student;
	this->assessList = new list<CAssessUnit>();
}

CAssessment::~CAssessment()
{
	if (assessList != 0)
	{
		delete assessList;
		assessList = nullptr;
	}
}

double CAssessment::getScore()
{
	// calculate score by going through list
	if (assessList->empty()) return 0.0;
	double total = 0.0;
	for (auto itr = assessList->begin(); itr != assessList->end(); ++itr)
		total += itr->getScore();

	return total;
}

void CAssessment::addAssessmentUnit(CAssessUnit assessUnit)
{
	assessList->push_back(assessUnit);
}

void CAssessment::removeAssessmentUnit(int index)
{
	auto itr = assessList->begin();
	advance(itr, index);
	assessList->erase(itr);
}

int CAssessment::getNumOfAssessmentUnits()
{
	return assessList->size();
}

CStudent *CAssessment::getStudent()
{
	return student;
}

void CAssessment::setStudent(CStudent *student)
{
	if (student != 0)
	{
		delete this->student;
		this->student = nullptr;
	}
	this->student = student;
}