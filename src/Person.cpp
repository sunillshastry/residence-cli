#include <iostream>
#include "./../include/Person.h"

Person::Person()
{
	this->name = "";
	this->socialInsuranceNumber = "";
}

Person::Person(std::string name, std::string socialInsuranceNumber)
{
	this->name = name;
	this->socialInsuranceNumber = socialInsuranceNumber;
}

std::string Person::get_name()
{
	return this->name;
}

std::string Person::get_social_insurance_number()
{
	return this->socialInsuranceNumber;
}

void Person::set_name(std::string name)
{
	this->name = name;
}

void Person::set_social_insurance_number(std::string socialInsuranceNumber)
{
	this->socialInsuranceNumber = socialInsuranceNumber;
}