#include <iostream>
#include "./../include/BasicManager.h"
#include "./../include/Person.h"

BasicManager::BasicManager() : Person()
{
	this->employee_id = "";
}

BasicManager::BasicManager(std::string name, std::string social_insurance_number, std::string employee_id)
	: Person(name, social_insurance_number)
{
	this->employee_id = employee_id;
}

std::string BasicManager::get_employee_id()
{
	return this->employee_id;
}