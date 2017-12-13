/**
 * Project Untitled
 */


#include "CProject.h"
#include <sstream>

CProject::CProject(std::string title, std::string description, time_t start, time_t end, std::string role, std::list<std::string> responsibilities) {
	this->projectTitle = title;
	this->projectDescription = description;
	this->startDate = start;
	this->endDate = end;
	this->role = role;
	this->responsibilities = responsibilities;
}

std::string CProject::getPrjTitle() {
    return projectTitle;
}

void CProject::setPrjTitle(std::string title) {
    this->projectTitle = title;
}

std::string CProject::getPrjDescription() {
    return projectDescription;
}

void CProject::setPrjDescription(std::string description) {
    this->projectDescription = description;
}

time_t CProject::getStart() {
    return startDate;
}

void CProject::setStart(time_t start) {
    this->startDate = start;
}

time_t CProject::getEnd() {
    return endDate;
}

void CProject::setEnd(time_t end) {
    this->endDate = end;
}

std::string CProject::getRole() {
	return role;
}

void CProject::setRole(std::string role) {
	this->role = role;
}

std::list<std::string> CProject::getResponsbilities() {
    return responsibilities;
}

void CProject::setResponsibilities(std::list<std::string> resp) {
    this->responsibilities = resp;
}

std::string CProject::toString() {
	// TODO Convert start and end date to std::string
    std::string str = "Project Title: " + projectTitle + '\n' 
		+ "Project Description: " + projectDescription + '\n'
		+ "Project Role: " + role + '\n'
		+ "Project Start Date: " //+ startDate + '\n'
		+ "Project End Date: " //+ endDate + '\n'
		+ "Project Responsibilities: " + '\t';

	for (auto itr = responsibilities.begin(); itr != responsibilities.end(); ++itr)
		str += "\t -" + *itr + '\n';

	return str;
}