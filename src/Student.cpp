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