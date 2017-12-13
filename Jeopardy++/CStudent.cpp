/**
 * Project Untitled
 */


#include "CStudent.h"
#include "CContactInfo.h"
#include <sstream>

CStudent::CStudent()
{
	this->name = "";
	this->ID = "";
}

CStudent::CStudent(std::string name, std::string ID)
{
	this->name = name;
}

CStudent::~CStudent() {};

std::string CStudent::getName()
{
	return name;
}

void CStudent::setName(std::string name)
{
	this->name = name;
}

std::string CStudent::getID()
{
	return ID;
}

void CStudent::setID(std::string ID)
{
	this->ID = ID;
}

CContactInfo CStudent::getContact()
{
	return contactInfo;
}

void CStudent::setContact(CContactInfo contact)
{
	this->contactInfo = contact;
}

std::string CStudent::getFullInfo()
{
	return "";
}

std::string CStudent::toString()
{
	return "Name: " + name + '\n' + " ID: " + ID + '\n' + contactInfo.toString();
}