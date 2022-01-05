#include <iostream>
#include <vector>
#include "./../include/Manager.h"
#include "./../include/BasicManager.h"
#include "./../include/Student.h"

/**
 * The default constructor for the Manager class. Initialises all values to null or zero
 * Uses the BasicManager class to set all the attribute values to zero
 */
Manager::Manager() : BasicManager() {}

/**
 * The main constructor for the Manager class. Initialises all values to their respective attributes
 * Uses the BasicManager class to initialise all the attributes
 * @param name The name of the manager
 * @param social_insurance_number The Social Insurance Number of the manager
 * @param employee_id The unique employee identity number of the manager
 */
Manager::Manager(std::string name, std::string social_insurance_number, std::string employee_id)
	: BasicManager(name, social_insurance_number, employee_id) {}

/**
 * Adds a student to the list of all student associated to the manager
 * Adds a student only if the object is not present already
 * @param student The student (object) that is to be added
 */
void Manager::add_student(Student student)
{
	if (this->has_student(student.get_id()))
	{
		throw -1;
	}
	else
	{
		this->students_list.push_back(student);
	}
}

/**
 * Checks if a student is already present in the list of student associated to the manager
 * @param student_id The unique student identity number
 * @return true if the student is present, else false
 */
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

/**
 * Removes a student from the list of students associated to the manager, if present
 * @param student_id The unique student identity number
 */
void Manager::remove_student(std::string student_id)
{
	int index = -1;
	if (!this->has_student(student_id))
	{
		throw -1;
	}
	else
	{
		for (int i = 0; i < this->students_list.size(); i++)
		{
			std::string iterative_id = this->students_list.at(i).get_id();
			if (iterative_id == student_id)
			{
				index = i;
				break;
			}
		}
	}
	if (index > -1)
	{
		this->students_list.erase(this->students_list.begin() + index);
	}
}

/**
 * Returns a summary of the manager, along with the students associated
 * @return A string containing all the information about the Manager and the name of the student associated
 * to the Manager, as a list.
 */
std::string Manager::to_string()
{
	std::string result = "Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Employee ID: " + this->get_employee_id() + "\n";
	result += "List of students: \n";
	if (this->students_list.size() > 0)
	{
		for (int i = 0; i < this->students_list.size(); i++)
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