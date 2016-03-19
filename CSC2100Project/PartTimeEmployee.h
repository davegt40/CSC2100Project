#pragma once
#include "EmployeeType.h"
#include <iostream>
#include <string>
using namespace std;

class PartTimeEmployee :
	public EmployeeType
{
public:
	PartTimeEmployee();
	PartTimeEmployee(double, double);
	~PartTimeEmployee();

	void print() const;
	void setnameRateHours();
	double calculatePay() const;

private:
	double payRate;
	double hoursWorked;
};