/**
 * Project Untitled
 */


#ifndef _CCOURSEINFO_H
#define _CCOURSEINFO_H

#include "CStudent.h"
#include <list>

using namespace std;

class CCourseInfo : CStudent {
public: 
    CCourseInfo(string name, string ID);
    
    string getCourseName();
    void setCourseName(string name);
    string getCourseID();
    void setCourseID(string ID);
    string toString();
    list<string> getCompetencyList();
    void setCompetencyList(list<string> list);

private: 
    string courseName;
    string courseID;
    string description;
	list<string> competencyList;
};

#endif //_CCOURSEINFO_H