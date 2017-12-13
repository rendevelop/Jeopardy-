/**
 * Project Untitled
 */


#ifndef _CCONTACTINFO_H
#define _CCONTACTINFO_H

#include <iostream>



class CContactInfo {
public: 
	CContactInfo(std::string address, std::string phone, std::string email);
	CContactInfo(CContactInfo * another);
	CContactInfo();

    std::string getAddress();
    std::string getPhone();
    std::string getEmail();
    void setAddress(std::string address);
    void setPhone(std::string phone);
	void setEmail(std::string email);
    std::string toString();
    void operator=(CContactInfo * another);

private: 
    std::string address;
    std::string phone;
    std::string email;
};

#endif //_CCONTACTINFO_H