/**
 * Project Untitled
 */


#include "CCourseInfo.h"

CCourseInfo::CCourseInfo(string name, string ID) {
	this->courseName = name;
	this->courseID = ID;
}

string CCourseInfo::getCourseName() {
    return courseName;
}

void CCourseInfo::setCourseName(string name) {
	this->courseName = name;
}

string CCourseInfo::getCourseID() {
	return courseID;
}

void CCourseInfo::setCourseID(string ID) {
	this->courseID = ID;
}

list<string> CCourseInfo::getCompetencyList() {
    return this->competencyList;
}

void CCourseInfo::setCompetencyList(list<string> list) {
    this->competencyList = list;
}

string CCourseInfo::toString() {
	return "Course Name: " + courseName + '\n' + "Course ID: " + courseID;
}