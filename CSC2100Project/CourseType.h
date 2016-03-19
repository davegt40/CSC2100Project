#pragma once
#include "StudentType.h"
#include <iostream>
#include <string>
using namespace std;

class CourseType
{
public:
	CourseType();
	CourseType(string, int, int);
	~CourseType();

	void setCourseInfo();
	void print() const;
	int getCredits() const;
	int getCourseNumber() const;
	string getCourseName() const;

private:
	string courseName;
	int courseNumber;
	int courseCredits;
	StudentType *studentList;
	// Instructor Placeholder
};

