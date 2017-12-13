/**
 * Project Untitled
 */


#ifndef _CCOURSEINFO_H
#define _CCOURSEINFO_H

#include "CStudent.h"
#include <list>



class CCourseInfo : CStudent {
public: 
    CCourseInfo(std::string name, std::string ID);
    
    std::string getCourseName();
    void setCourseName(std::string name);
    std::string getCourseID();
    void setCourseID(std::string ID);
    std::string toString();
    std::list<std::string> getCompetencyList();
    void setCompetencyList(std::list<std::string> list);

private: 
    std::string courseName;
    std::string courseID;
    std::string description;
	std::list<std::string> competencyList;
};

#endif //_CCOURSEINFO_H