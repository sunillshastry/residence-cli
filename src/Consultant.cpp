#include <iostream>
#include "./../include/Consultant.h"

Consultant::Consultant() : Manager() {}

Consultant::Consultant(std::string name, std::string social_insurance_number, std::string employee_id)
		: Manager(name, social_insurance_number, employee_id) {}