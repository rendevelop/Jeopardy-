/**
 * Project Untitled
 */


#ifndef _CCONTACTINFO_H
#define _CCONTACTINFO_H

#include "CStudent.h"
#include <iostream>

using namespace std;

class CContactInfo : CStudent {
public: 
	CContactInfo(string address, string phone, string email);
	CContactInfo(CContactInfo * another);
	CContactInfo();

    string getAddress();
    string getPhone();
    string getEmail();
    void setAddress(string address);
    void setPhone(string phone);
	void setEmail(string email);
    string toString();
    void operator=(CContactInfo * another);

private: 
    string address;
    string phone;
    string email;
};

#endif //_CCONTACTINFO_H