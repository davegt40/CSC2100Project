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
}

PersonType::PersonType(string first, string last, char g, int a, string ph, double wgt, double hgt,
												string str, string c, string st, string pc, string coun)
{
	firstName = first;
	lastName = last;
	gender = g;
	age = a;
	phoneNumber = ph;
	weight = wgt;
	height = hgt;
	address.mailingStreet = str;
	address.city = c;
	address.state = st;
	address.postalCode = pc;
	address.country = coun;
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
