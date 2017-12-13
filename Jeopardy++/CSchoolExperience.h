/**
 * Project Untitled
 */


#ifndef _CSCHOOLEXPERIENCE_H
#define _CSCHOOLEXPERIENCE_H

#include <ctime>
#include <iostream>

class CSchoolExperience {
public: 
	CSchoolExperience(std::string school, time_t sDate, time_t eDate);

    std::string getSchoolName();
    time_t getStartDate();
    time_t getEndDate();
    void setSchoolName(std::string school);
    void setStartDate(time_t sDate);
    void setEndDate(time_t eDate);
    std::string getMajor();
    void setMajor(std::string major);
    std::string getDegree();
    void setDegree(std::string degree);
    std::string toString();

private: 
    std::string schoolName;
    std::string startDate;
    std::string endDate;
    std::string major;
    std::string degree;
};

#endif //_CSCHOOLEXPERIENCE_H