#pragma once
#include <string>
using namespace std;

class Address
{
public:
	Address();
	Address(string, string, string, string, string);
	~Address();

	string mailingStreet;
	string city;
	string state;
	string postalCode;
	string country;
};

