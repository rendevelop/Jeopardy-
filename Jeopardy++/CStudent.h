/**
 * Project Untitled
 */


#ifndef _CSTUDENT_H
#define _CSTUDENT_H

#include "CContactInfo.h"
#include <iostream>

using namespace std;

class CStudent {

private:
	string name;
	string ID;
	CContactInfo contactInfo;

public: 
	CStudent();
	CStudent(string name, string ID);
	~CStudent();

    string getName();
    void setName(string name);
    string getID();
    void setID(string ID);
    CContactInfo getContact();
    void setContact(CContactInfo contact);
    string getFullInfo();
	string toString();

};

#endif //_CSTUDENT_H