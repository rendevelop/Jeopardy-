/**
 * Project Untitled
 */


#include "CStudent.h"
#include "CContactInfo.h"
#include <sstream>

using namespace std;

CStudent::CStudent()
{
	this->name = "";
	this->ID = "";
}

CStudent::CStudent(string name, string ID)
{
	this->name = name
}

CStudent::~CStudent() {};

string CStudent::getName()
{
	return name;
}

void CStudent::setName(string name)
{
	this->name = name;
}

string CStudent::getID()
{
	return ID;
}

void CStudent::setID(string ID)
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

string CStudent::getFullInfo()
{
	
}

string CStudent::toString()
{
	return "Name: " + name + '\n' + " ID: " + ID + '\n' + contactInfo.toString();
}