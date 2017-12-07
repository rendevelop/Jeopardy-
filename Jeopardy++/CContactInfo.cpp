/**
 * Project Untitled
 */


#include "CContactInfo.h"

CContactInfo::CContactInfo() {
	this->address = "";
	this->phone = "";
	this->email = "";
}

CContactInfo::CContactInfo(string address, string phone, string email) {
	this->address = address;
	this->phone = phone;
	this->email = email;
}

CContactInfo::CContactInfo(CContactInfo * another) {
	if (another == 0) return;

	this->address = another->address;
	this->phone = another->phone;
	this->email = another->email;
}

string CContactInfo::getAddress() {
    return address;
}

string CContactInfo::getPhone() {
    return phone;
}

string CContactInfo::getEmail() {
    return email;
}

void CContactInfo::setAddress(string address) {
    this->address = address;
}

void CContactInfo::setPhone(string phone) {
    this->phone = phone;
}

void CContactInfo::setEmail(string email) {
    this->email = email;
}

string CContactInfo::toString() {
    return "Address: " + address + '\n' + "Phone: " + phone + '\n' + "Email: " + email;
}

void CContactInfo::operator=(CContactInfo * another) {
	CContactInfo(another);
}