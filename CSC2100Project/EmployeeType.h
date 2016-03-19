#pragma once
#include "PersonType.h"
#include <iostream>
#include <string>
using namespace std;

class EmployeeType :
	public PersonType
{
public:
	EmployeeType();
	EmployeeType(string, string, double, double, double, string);
	~EmployeeType();

	void setInfo();
	void setSalary();
	double getSalary() const;
	void setDepartment();
	string getDepartment() const;
	void setCategory();
	string getCategory() const;
	void setID();
	string getID() const;

private:
	string departmentName;
	string departmentID;
	double yearlySalary;
	double monthlySalary;
	double hourlySalary;
	string employeeID;
};

