#pragma once
#include "CourseType.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include "StudentType.h"
#include <iostream>
#include <string>
using namespace std;

class InstructorType
{
public:
	InstructorType();
	~InstructorType();

	void setInfo();
	string getDepartment() const;
	void printInstructor() const;

private:
	string department;
	CourseType *courseList;
	char instructorCategory;
	FullTimeEmployee fullTimeInstructor;
	PartTimeEmployee partTimeInstructor;
	StudentType studentInstructor;
};

