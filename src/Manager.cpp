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

void Manager::remove_student(std::string student_id)
{
	int index = -1;
	if (this->has_student(student_id))
	{
		for (int i = 0; i < this->students_list.size(); i++)
		{
			std::string iterative_id = this->students_list.at(i).get_id();
			if (iterative_id == student_id)
			{
				index = i;
			}
		}
	}
	if (index > -1)
	{
		this->students_list.erase(this->students_list.begin() + index);
	}
}

std::string Manager::to_string()
{
	std::string result = "Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Employee ID: " + this->get_employee_id() + "\n";
	result += "List of students: \n";
	if (this->students_list.size() > 0)
	{
		for (int i = 0; i < this->student_list.size(); i++)
		{
			std::string student_name = this->students_list.at(i).get_name();
			result += std::to_string(i + 1) + ") " + student_name + "\n";
		}
	}
	else
	{
		result += "No students associated\n";
	}

	return result;
}