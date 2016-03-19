#pragma once
#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

class PersonType
{
public:
	PersonType();
	PersonType(string, string, char, int, string, string, string, string, string, double, double);
	~PersonType();

	virtual void print() const;
	virtual double calculatePay() const;
	void setName(string, string);
	string getFirstName() const;
	string getLastName() const;
	void createPersonWizard();

private:
	string firstName;
	string lastName;
	char gender;
	int age;
	string phoneNumber;
	double weight;
	double height;
	Address address;
};

