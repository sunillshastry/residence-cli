#include <iostream>
#include <vector>
#include "./../include/Student.h"
#include "./../include/Person.h"

Student::Student() : Person()
{
	this->student_id = "";
	this->bed_label = -1;
}

Student::Student(std::string name, std::string social_insurance_number, std::string student_id, int bed_label)
	: Person(name, social_insurance_number)
{
	this->student_id = student_id;
	this->bed_label = -1;
}

std::string Student::get_id()
{
	return this->student_id;
}

int Student::get_bed_label()
{
	return this->bed_label;
}

/*
void Student::add_manager(Manager manager)
{
	std::cout << "This method is supposed to add a new manager to the list of managers!" << std::endl;
	std::cout << "! NEED TO IMPLEMENT THIS METHOD !" << std::endl;
}
*/

/*
void Student::remove_manager(std::string employee_id) {
	std::cout << "This method is supposed to check and remove and existing manager in the list!" << std::endl;
	std::cout << "! NEED TO IMPLEMENT THIS METHOD !" << std::endl;
}
*/

/*
bool Student::has_manager(std::string employee_id)
{
	std::cout << "This method is supposed to check if a manager is present in the list!" << std::endl;
	std::cout << "! NEED TO IMPLEMENT THIS METHOD !" << std::endl;
}
*/

/*
std::vector<Manager> Student::get_manager_list()
{
	std::cout << "This method is supposed to return a list of all the managers associated to the student" << std::endl;
	std::cout << "! NEED TO IMPLEMENT THIS METHOD !" << std::endl;
}
*/

void Student::set_bed_label(int bed_label)
{
	this->bed_label = bed_label;
}

std::string Student::to_string()
{
	std::string result = "Name: " + this->name + "\n";
	result += "Social Insurance Number: " + this->social_insurance_number + "\n";
	result += "Student ID: " + this->student_id + "\n";
	result += "Residence Bed Label: " + std::to_string(this->bed_label) + "\n";
	return result;
}