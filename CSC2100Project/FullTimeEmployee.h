#pragma once
#include "EmployeeType.h"
#include <iostream>
#include <string>
using namespace std;

class FullTimeEmployee :
	public EmployeeType
{
public:
	FullTimeEmployee();
	FullTimeEmployee(double, double);
	~FullTimeEmployee();

	void setSalary();
	double getSalary() const;
	void setBonus();
	double getBonus() const;
	void print();
	double calculatePay() const;

private:
	double empSalary;
	double empBonus;
};

