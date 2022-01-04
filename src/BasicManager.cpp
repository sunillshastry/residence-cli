#include <iostream>
#include "./../include/BasicManager.h"
#include "./../include/Person.h"

/**
 * The default constructor for BasicManager class that initialises all values to null or zero
 * Uses the Person class to initialise the 'name' and 'social insurance number' to null or zero
 */
BasicManager::BasicManager() : Person()
{
	this->employee_id = "";
}

/**
 * The default constructor for BasicManager class that initialises the values to respect
 * argument values
 * @param name The name of the manager
 * @param social_insurance_number The social insurance number of the manager
 * @param employee_id The unique employee identity number for the manager
 */
BasicManager::BasicManager(std::string name, std::string social_insurance_number, std::string employee_id)
	: Person(name, social_insurance_number)
{
	this->employee_id = employee_id;
}

/**
 * Returns the BasicManager's unique employee identity number
 * @return A string, the unique employee identity number of the manager
 */
std::string BasicManager::get_employee_id()
{
	return this->employee_id;
}

/**
 * Returns a string of summary consisting of all the essential information related to the BasicManager
 * @return A string containing the name, social insurance number and the employee ID value of the
 * manager.
 */
std::string BasicManager::to_string()
{
	// Create a single string result variable and keep appending each attribute to it
	std::string result = "Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Employee ID: " + this->employee_id + "\n";

	// Return the single string variable
	return result;
}