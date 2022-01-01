#include <iostream>
#include "./../include/Person.h"

/**
 * A default constructor that initialises the attributes to empty values
 */
Person::Person()
{
	this->name = "";
	this->socialInsuranceNumber = "";
}

/**
 * The main constructor that initialises the attributes as the argument values
 */
Person::Person(std::string name, std::string socialInsuranceNumber)
{
	this->name = name;
	this->socialInsuranceNumber = socialInsuranceNumber;
}

/**
 * Retrieves the name of the person
 */
std::string Person::get_name()
{
	return this->name;
}

/**
 * Retrieves the social insurance number of the person
 */
std::string Person::get_social_insurance_number()
{
	return this->socialInsuranceNumber;
}

/**
 * Sets the name of the person to the passed argument
 * @param name The new name of the person
 */
void Person::set_name(std::string name)
{
	this->name = name;
}

/**
 * Sets the social insurance number of the person to the passed argument
 * @param socialInsuranceNumber The new social insurance number of the person
 */
void Person::set_social_insurance_number(std::string socialInsuranceNumber)
{
	this->socialInsuranceNumber = socialInsuranceNumber;
}