/**
 * Project Untitled
 */


#ifndef _CSTUDENT_H
#define _CSTUDENT_H

#include "CContactInfo.h"
#include <iostream>

class CStudent {

private:
	std::string name;
	std::string ID;
	CContactInfo contactInfo;

public: 
	CStudent();
	CStudent(std::string name, std::string ID);
	~CStudent();

    std::string getName();
    void setName(std::string name);
    std::string getID();
    void setID(std::string ID);
    CContactInfo getContact();
    void setContact(CContactInfo contact);
    std::string getFullInfo();
	std::string toString();

};

#endif //_CSTUDENT_H