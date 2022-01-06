#include <iostream>

#ifndef __BASICMANAGER_H__
#define __BASICMANAGER_H__
#include "Person.h"

/**
 * A short and simple model of a basic manager consisting of basic details like name, SIN and
 * employee ID
 */
class BasicManager : public Person
{
private:
	/** The unique employee identity of the manager */
	std::string employee_id;

public:
	// Constructors
	/** The default constructor for BasicManager class that initialises all values to null or zero */
	BasicManager();

	/**
	 * The default constructor for BasicManager class that initialises the values to respect
	 * argument values
	 */
	BasicManager(std::string name, std::string social_insurance_number, std::string employee_id);

	// Accessor methods
	/** Returns the BasicManager's unique employee identity number */
	std::string get_employee_id();

	// Summary method
	/** Returns a string of summary consisting of all the essential information related to the BasicManager */
	std::string to_string();
};

#endif