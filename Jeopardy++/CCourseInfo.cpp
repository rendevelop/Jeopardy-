/**
 * Project Untitled
 */


#include "CCourseInfo.h"

CCourseInfo::CCourseInfo(std::string name, std::string ID) {
	this->courseName = name;
	this->courseID = ID;
}

std::string CCourseInfo::getCourseName() {
    return courseName;
}

void CCourseInfo::setCourseName(std::string name) {
	this->courseName = name;
}

std::string CCourseInfo::getCourseID() {
	return courseID;
}

void CCourseInfo::setCourseID(std::string ID) {
	this->courseID = ID;
}

std::list<std::string> CCourseInfo::getCompetencyList() {
    return this->competencyList;
}

void CCourseInfo::setCompetencyList(std::list<std::string> list) {
    this->competencyList = list;
}

std::string CCourseInfo::toString() {
	return "Course Name: " + courseName + '\n' + "Course ID: " + courseID;
}