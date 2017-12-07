/**
 * Project Untitled
 */


#ifndef _CSCHOOLEXPERIENCE_H
#define _CSCHOOLEXPERIENCE_H

#include <ctime>
#include <iostream>

using namespace std;

class CSchoolExperience {
public: 
	CSchoolExperience(string school, time_t sDate, time_t eDate);

    string getSchoolName();
    time_t getStartDate();
    time_t getEndDate();
    void setSchoolName(string school);
    void setStartDate(time_t sDate);
    void setEndDate(time_t eDate);
    string getMajor();
    void setMajor(string major);
    string getDegree();
    void setDegree(string degree);
    string toString();

private: 
    string schoolName;
    string startDate;
    string endDate;
    string major;
    string degree;
};

#endif //_CSCHOOLEXPERIENCE_H