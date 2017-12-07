/**
 * Project Untitled
 */


#include "CProject.h"
#include <sstream>

CProject::CProject(string title, string description, time_t start, time_t end, string role, list<string> responsibilities) {
	this->projectTitle = title;
	this->projectDescription = description;
	this->startDate = start;
	this->endDate = end;
	this->role = role;
	this->responsibilities = responsibilities;
}

string CProject::getPrjTitle() {
    return projectTitle;
}

void CProject::setPrjTitle(string title) {
    this->projectTitle = title;
}

string CProject::getPrjDescription() {
    return projectDescription;
}

void CProject::setPrjDescription(string description) {
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

string CProject::getRole() {
	return role;
}

void CProject::setRole(string role) {
	this->role = role;
}

list<string> CProject::getResponsbilities() {
    return responsibilities;
}

void CProject::setResponsibilities(list<string> resp) {
    this->responsibilities = resp;
}

string CProject::toString() {
	// TODO Convert start and end date to string
    string str = "Project Title: " + projectTitle + '\n' 
		+ "Project Description: " + projectDescription + '\n'
		+ "Project Role: " + role + '\n'
		+ "Project Start Date: " //+ startDate + '\n'
		+ "Project End Date: " //+ endDate + '\n'
		+ "Project Responsibilities: " + '\t';

	for (auto itr = responsibilities.begin(); itr != responsibilities.end(); ++itr)
		str += "\t -" + *itr + '\n';

	return str;
}