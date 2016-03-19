#pragma once
#include "StudentType.h"
#include "InstructorType.h"
#include <iostream>
#include <string>
using namespace std;

class CourseType
{
public:
	CourseType();
	CourseType(string, int, int, InstructorType);
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
	InstructorType instructor;
};

