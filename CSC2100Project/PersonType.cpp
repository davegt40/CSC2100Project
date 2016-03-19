#include "PersonType.h"
#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

PersonType::PersonType()
{
	firstName = "";
	lastName = "";
	gender = NULL;
	age = 0;
	phoneNumber = "";
	weight = 0.0;
	height = 0.0;
	address.mailingStreet = "";
	address.city = "";
	address.state = "";
	address.postalCode = "";
	address.country = "";
}

PersonType::PersonType(string, string, char, int, string, string, string, string, string, double, double)
{
}


PersonType::~PersonType()
{
}

void PersonType::print() const
{
}

double PersonType::calculatePay() const
{
}

void PersonType::setName(string, string)
{
}

string PersonType::getFirstName() const
{
	return string();
}

string PersonType::getLastName() const
{
	return string();
}

void PersonType::createPersonWizard()
{
}
