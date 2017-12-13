/**
 * Project Untitled
 */


#include "CContactInfo.h"

CContactInfo::CContactInfo() {
	this->address = "";
	this->phone = "";
	this->email = "";
}

CContactInfo::CContactInfo(std::string address, std::string phone, std::string email) {
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

std::string CContactInfo::getAddress() {
    return address;
}

std::string CContactInfo::getPhone() {
    return phone;
}

std::string CContactInfo::getEmail() {
    return email;
}

void CContactInfo::setAddress(std::string address) {
    this->address = address;
}

void CContactInfo::setPhone(std::string phone) {
    this->phone = phone;
}

void CContactInfo::setEmail(std::string email) {
    this->email = email;
}

std::string CContactInfo::toString() {
    return "Address: " + address + '\n' + "Phone: " + phone + '\n' + "Email: " + email;
}

void CContactInfo::operator=(CContactInfo * another) {
	CContactInfo::CContactInfo(another);
}