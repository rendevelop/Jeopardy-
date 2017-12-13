/**
 * Project Untitled
 */


#include "CWorkExperience.h"

CWorkExperience::CWorkExperience(std::string company, time_t start, time_t end, std::string role, std::list<CProject> projects) {
	this->companyName = company;
	this->startDate = start;
	this->endDate = end;
	this->role = role;
	this->projects = projects;
}

std::string CWorkExperience::getCompanyName() {
    return "";
}

void CWorkExperience::setCompanyName(std::string company) {

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

std::string CWorkExperience::getRole() {
    return "";
}

void CWorkExperience::setRole(std::string role) {
    return;
}

std::list<CProject> CWorkExperience::getProjects() {
    return projects;
}

void CWorkExperience::setProjects(std::list<CProject> projects) {
    return;
}

std::string CWorkExperience::toString() {
    return "";
}