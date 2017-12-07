/**
 * Project Untitled
 */


#ifndef _CPROJECT_H
#define _CPROJECT_H

#include <list>
#include <iostream>
#include <ctime>

using namespace std;

class CProject {

public: 
    
    CProject(string title, string description, time_t start, time_t end, string role, list<string> responsibilities);
    
    string getPrjTitle();
    void setPrjTitle(string title);
    string getPrjDescription();
    void setPrjDescription(string description);
    time_t getStart();
    void setStart(time_t start);
    time_t getEnd();
    void setEnd(time_t end);
    string getRole();
    void setRole(string role);
    list<string> getResponsbilities();
    void setResponsibilities(list<string> resp);
    string toString();

private: 
    string projectTitle;
    string projectDescription;
    time_t startDate;
    time_t endDate;
    string role;
    list<string> responsibilities;
};

#endif //_CPROJECT_H