#include <iostream>
#include "./../include/Consultant.h"

/** The default constructor for the Consultant class, initialises all values to null or zero */
Consultant::Consultant() : Manager() {}

/**
 * The main constructor for the Consultant class, initialises all values to their respective values
 * @param name The name of the Consultant
 * @param social_insurance_number The social insurance number of the Consultant
 * @param employee_id THe unique identifier for the Consultant
 */
Consultant::Consultant(std::string name, std::string social_insurance_number, std::string employee_id)
		: Manager(name, social_insurance_number, employee_id) {}

/**
 * Returns a string representation of the Consultant including all the details of the consultant
 * @return A string representation of the Consultant and all the details related to the Consultant
 */
std::string Consultant::to_string()
{
	std::string result = "Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Employee ID: " + this->get_employee_id() + "\n";
	result += "Consultant: Yes\n";
	return result;
}