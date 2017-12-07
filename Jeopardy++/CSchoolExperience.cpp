/**
 * Project Untitled
 */


#include "CSchoolExperience.h"

CSchoolExperience::CSchoolExperience(string school, time_t sDate, time_t eDate) {
	this->schoolName = school;
	this->startDate = sDate;
	this->endDate = eDate;
}

string CSchoolExperience::getSchoolName() {
    return schoolName;
}

time_t CSchoolExperience::getStartDate() {
    return NULL;
}

time_t CSchoolExperience::getEndDate() {
    return NULL;
}

void CSchoolExperience::setSchoolName(string school) {
    this->schoolName = school;
}

void CSchoolExperience::setStartDate(time_t sDate) {
    return;
}

void CSchoolExperience::setEndDate(time_t eDate) {
    return;
}

string CSchoolExperience::getMajor() {
    return "";
}

void CSchoolExperience::setMajor(string major) {
    return;
}

string CSchoolExperience::getDegree() {
    return "";
}

void CSchoolExperience::setDegree(string degree) {
    return;
}

string CSchoolExperience::toString() {
    return "";
}