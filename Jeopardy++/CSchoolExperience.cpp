/**
 * Project Untitled
 */


#include "CSchoolExperience.h"

CSchoolExperience::CSchoolExperience(std::string school, time_t sDate, time_t eDate) {
	this->schoolName = school;
	this->startDate = sDate;
	this->endDate = eDate;
}

std::string CSchoolExperience::getSchoolName() {
    return schoolName;
}

time_t CSchoolExperience::getStartDate() {
    return NULL;
}

time_t CSchoolExperience::getEndDate() {
    return NULL;
}

void CSchoolExperience::setSchoolName(std::string school) {
    this->schoolName = school;
}

void CSchoolExperience::setStartDate(time_t sDate) {
    return;
}

void CSchoolExperience::setEndDate(time_t eDate) {
    return;
}

std::string CSchoolExperience::getMajor() {
    return "";
}

void CSchoolExperience::setMajor(std::string major) {
    return;
}

std::string CSchoolExperience::getDegree() {
    return "";
}

void CSchoolExperience::setDegree(std::string degree) {
    return;
}

std::string CSchoolExperience::toString() {
    return "";
}