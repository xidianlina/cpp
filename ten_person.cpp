/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include "ten_person.h"

Person::Person(const std::string &ln, const char *fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::show() const
{
	std::cout << "First name is " << fname << " Last name is " << lname << std::endl;
}

void Person::formalShow() const
{
	std::cout << "Last Name is " << lname << " First Name is " << fname << std::endl;
}
*/