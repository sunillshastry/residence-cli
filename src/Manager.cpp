#include <iostream>
#include <vector>
#include "./../include/Manager.h"
#include "./../include/BasicManager.h"
#include "./../include/Student.h"

Manager::Manager() : BasicManager() {}

Manager::Manager(std::string name, std::string social_insurance_number, std::string employee_id)
	: BasicManager(name, social_insurance_number, employee_id) {}
