#pragma once
#include "PersonType.h"
#include <iostream>
#include <string>
using namespace std;

class StudentType :
	public PersonType
{
public:
	StudentType();
	StudentType(int, int, bool, int);
	~StudentType();

	void setInfo();
	void print() const;
	int getHoursEnrolled() const;
	double getGPA() const;
	double calculateGPA() const;
	double billingAmount() const;
	void sortCourses() const;

private:
	int studentID;
	int numberOfCourses;
	bool isTuitionPaid;
	int yearGraduate;
	// coursesEnrolled placeholder
	// coursesGrades placeholder
};

