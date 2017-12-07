/**
 * Project Untitled
 */


#include "CWorkExperience.h"

CWorkExperience::CWorkExperience(string company, time_t start, time_t end, string role, list<CProject> projects) {
	this->companyName = company;
	this->startDate = start;
	this->endDate = end;
	this->role = role;
	this->projects = projects;
}

string CWorkExperience::getCompanyName() {
    return "";
}

void CWorkExperience::setCompanyName(string company) {

}

time_t CWorkExperience::getStartDate() {
    return NULL;
}

void CWorkExperience::setStartDate(time_t start) {
    return;
}

time_t CWorkExperience::getEndDate() {
    return NULL;
}

void CWorkExperience::setEndDate(time_t end) {
    return;
}

string CWorkExperience::getRole() {
    return "";
}

void CWorkExperience::setRole(string role) {
    return;
}

list<CProject> CWorkExperience::getProjects() {
    return projects;
}

void CWorkExperience::setProjects(list<CProject> projects) {
    return;
}

string CWorkExperience::toString() {
    return "";
}