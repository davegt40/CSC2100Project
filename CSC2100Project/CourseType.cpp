#include "CourseType.h"
#include "StudentType.h"
#include "InstructorType.h"
#include <iostream>
#include <string>
using namespace std;

CourseType::CourseType()
{
}

CourseType::CourseType(string, int, int, InstructorType)
{
}

CourseType::~CourseType()
{
}

void CourseType::setCourseInfo()
{
}

void CourseType::print() const
{
}

int CourseType::getCredits() const
{
	return 0;
}

int CourseType::getCourseNumber() const
{
	return 0;
}

string CourseType::getCourseName() const
{
	return string();
}
