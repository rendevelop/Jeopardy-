/**
 * Project Untitled
 */


#ifndef _CWORKEXPERIENCE_H
#define _CWORKEXPERIENCE_H

#include "CProject.h"
#include <iostream>
#include <ctime>
#include <list>

using namespace std;

class CWorkExperience {
public: 
    string getCompanyName();
    void setCompanyName(string company);
    time_t getStartDate();
    void setStartDate(time_t start);
    time_t getEndDate();
    void setEndDate(time_t end);
    string getRole();
    void setRole(string role);
    list<CProject> getProjects();
    void setProjects(list<CProject> projects);
    CWorkExperience(string company, time_t start, time_t end, string role, list<CProject> projects);
    string toString();

private: 
    string companyName;
    time_t startDate;
    time_t endDate;
    string role;
    list<CProject> projects;
};

#endif //_CWORKEXPERIENCE_H