#include <iostream>
#include "./../include/Student.h"
#include "./../include/Person.h"

Student::Student(std::string student_id) : Person()
{
	this->student_id = student_id;
	this->bed_label = -1;
}

Student::Student(std::string name, std::string social_insurance_number, std::string student_id)
		: Person(name, social_insurance_number)
{
	this->student_id = student_id;
	this->bed_label = -1;
}