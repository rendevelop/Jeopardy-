/**
 * Project Untitled
 */


#ifndef _CWORKEXPERIENCE_H
#define _CWORKEXPERIENCE_H

#include "CProject.h"
#include <iostream>
#include <ctime>
#include <list>



class CWorkExperience {
public: 
    std::string getCompanyName();
    void setCompanyName(std::string company);
    time_t getStartDate();
    void setStartDate(time_t start);
    time_t getEndDate();
    void setEndDate(time_t end);
    std::string getRole();
    void setRole(std::string role);
    std::list<CProject> getProjects();
    void setProjects(std::list<CProject> projects);
    CWorkExperience(std::string company, time_t start, time_t end, std::string role, std::list<CProject> projects);
    std::string toString();

private: 
    std::string companyName;
    time_t startDate;
    time_t endDate;
    std::string role;
    std::list<CProject> projects;
};

#endif //_CWORKEXPERIENCE_H