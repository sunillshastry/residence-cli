#include <iostream>
#include "./../include/Person.h"

/**
 * A default constructor that initialises the attributes to empty values
 */
Person::Person()
{
	this->name = "";
	this->social_insurance_number = "";
}

/**
 * The main constructor that initialises the attributes as the argument values
 */
Person::Person(std::string name, std::string social_insurance_number)
{
	if (name == "" || name == " ")
	{
		throw -1;
	}
	if (social_insurance_number == "" || social_insurance_number == " ")
	{
		throw -1;
	}
	this->name = name;
	this->social_insurance_number = social_insurance_number;
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
	return this->social_insurance_number;
}

/**
 * Sets the name of the person to the passed argument
 * @param name The new name of the person
 */
void Person::set_name(std::string name)
{
	if (name == "" || name == " ")
	{
		throw -1;
	}
	this->name = name;
}

/**
 * Sets the social insurance number of the person to the passed argument
 * @param social_insurance_number The new social insurance number of the person
 */
void Person::set_social_insurance_number(std::string social_insurance_number)
{
	if (social_insurance_number == "" || social_insurance_number == " ")
	{
		throw -1;
	}
	this->social_insurance_number = social_insurance_number;
}

/**
 * Returns an entire person summary as a string suitable for printing/displaying purpose
 * @return A string consisting of all the details about a person in a printable format.
 */
std::string Person::to_string()
{
	return "Name: " + this->get_name() + "\nSocial Insurance Number: " + this->get_social_insurance_number();
}