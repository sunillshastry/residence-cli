#include <iostream>

#ifndef __CONSULTANT_H__
#define __CONSULTANT_H__
#include "Manager.h"

/**
 * A model of the Consultant object, a less advanced version of the Manager object.
 * The class inherits from Manager class.
 */
class Consultant : public Manager
{
public:
	/** The default constructor for the Consultant class, initialises all values to null or zero */
	Consultant();

	/** The main constructor for the Consultant class, initialises all values to their respective values*/
	Consultant(std::string name, std::string social_insurance_number, std::string employee_id);

	/** Returns a string representation of the Consultant including all the details of the consultant */
	std::string to_string();
}

#endif