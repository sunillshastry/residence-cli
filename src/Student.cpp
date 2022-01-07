#include <iostream>
#include "./../include/Student.h"
#include "./../include/Person.h"

/**
 * The default constructor for the Student class, creates a Student object with the unique student identity
 * number that is necessary.
 * @param student_id The unique identity number of the student object.
 */
Student::Student(std::string student_id) : Person()
{
	this->student_id = student_id;
	this->bed_label = -1;
}

/**
 * The main constructor for the Student class, creates a Student object with the name, social insurance
 * number and student identity number to create a proper Student object.
 * @param name The name of the Student
 * @param social_insurance_number The social insurance number of the Student
 * @param student_id The unique identity number of the Student
 */
Student::Student(std::string name, std::string social_insurance_number, std::string student_id)
		: Person(name, social_insurance_number)
{
	this->student_id = student_id;
	this->bed_label = -1;
}

int Student::get_bed_label()
{
	return this->bed_label;
}

std::string Student::get_student_id()
{
	return this->student_id;
}

void Student::set_bed_label(int bed_label)
{
	this->bed_label = bed_label;
}

std::string Student::to_string()
{
	std::string result = "Student Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Student ID: " + this->get_student_id() + "\n";
	return result;
}