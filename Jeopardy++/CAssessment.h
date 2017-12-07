
#ifndef _CASSESSMENT_H

#define _CASSESSMENT_H

#include "CAssessUnit.h"
#include "CStudent.h"
#include <list>

class CAssessment 
{
public:
	CAssessment(CStudent *student);
	~CAssessment();
	double getScore();
	void addAssessmentUnit(CAssessUnit assessUnit);
	void removeAssessmentUnit(int index);
	int getNumOfAssessmentUnits();
	CStudent *getStudent();
	void setStudent(CStudent *student);

private:
	list<CAssessUnit> *assessList;
	CStudent *student;

};

#endif