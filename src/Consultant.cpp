#include <iostream>
#include "./../include/Consultant.h"

Consultant::Consultant() : Manager() {}

Consultant::Consultant(std::string name, std::string social_insurance_number, std::string employee_id)
		: Manager(name, social_insurance_number, employee_id) {}

std::string Consultant::to_string()
{
	std::string result = "Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Employee ID: " + this->get_employee_id() + "\n";
	result += "Consultant: Yes\n";
	return result;
}