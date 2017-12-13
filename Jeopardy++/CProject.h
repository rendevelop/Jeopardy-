/**
 * Project Untitled
 */


#ifndef _CPROJECT_H
#define _CPROJECT_H

#include <list>
#include <iostream>
#include <ctime>



class CProject {

public: 
    
    CProject(std::string title, std::string description, time_t start, time_t end, std::string role, std::list<std::string> responsibilities);
    
    std::string getPrjTitle();
    void setPrjTitle(std::string title);
    std::string getPrjDescription();
    void setPrjDescription(std::string description);
    time_t getStart();
    void setStart(time_t start);
    time_t getEnd();
    void setEnd(time_t end);
    std::string getRole();
    void setRole(std::string role);
    std::list<std::string> getResponsbilities();
    void setResponsibilities(std::list<std::string> resp);
    std::string toString();

private: 
    std::string projectTitle;
    std::string projectDescription;
    time_t startDate;
    time_t endDate;
    std::string role;
    std::list<std::string> responsibilities;
};

#endif //_CPROJECT_H