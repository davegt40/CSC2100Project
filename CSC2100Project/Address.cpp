#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address()
{
	mailingStreet = "";
	city = "";
	state = "";
	postalCode = "";
	country = "";
}

Address::Address(string str, string c, string sta, string pc, string coun)
{
	mailingStreet = str;
	city = c;
	state = sta;
	postalCode = pc;
	country = coun;
}

Address::~Address()
{
}
