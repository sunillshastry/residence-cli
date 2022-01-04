#include <iostream>
#include "Person.h"

#ifndef __BASICMANAGER_H__
#define __BASICMANAGER_H__

class BasicManager : public Person
{
private:
	std::string employee_id;

public:
	BasicManager();
	BasicManager(std::string name, std::string social_insurance_number, std::string employee_id);

	std::string get_employee_id();

	std::string to_string();
};

#endif