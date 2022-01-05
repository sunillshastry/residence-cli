#include <iostream>
#include <vector>
#include "./../include/Manager.h"
#include "./../include/BasicManager.h"
#include "./../include/Student.h"

Manager::Manager() : BasicManager() {}

Manager::Manager(std::string name, std::string social_insurance_number, std::string employee_id)
	: BasicManager(name, social_insurance_number, employee_id) {}

void Manager::add_student(Student student)
{
	this->students_list.push_back(student);
}

bool Manager::has_student(std::string student_id)
{
	for (int i = 0; i < this->students_list.size(); i++)
	{
		std::string iterative_id = this->students_list.at(i).get_id();
		if (student_id == iterative_id)
		{
			return true;
		}
	}
	return false;
}