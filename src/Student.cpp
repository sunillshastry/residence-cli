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

/**
 * Returns the Student's bed label value. If bed is not assigned, the value returned is -1
 * @return The student's bed label or -1 if unassigned.
 */
int Student::get_bed_label()
{
	return this->bed_label;
}

/**
 * Returns the Student's unique identity number.
 * @return A string. The unique identity number of the specific student
 */
std::string Student::get_student_id()
{
	return this->student_id;
}

/**
 * Sets the Student's bed label value to a new value. Does not validate if the new bed label is correct.
 * @param bed_label The new bed label that needs to be set as the Student's bed number.
 */
void Student::set_bed_label(int bed_label)
{
	this->bed_label = bed_label;
}

/**
 * Creates a string summary of all the information about the student and returns it in a printable format.
 * @return A string consisting of all the details related to a student
 */
std::string Student::to_string()
{
	std::string result = "Student Name: " + this->get_name() + "\n";
	result += "Social Insurance Number: " + this->get_social_insurance_number() + "\n";
	result += "Student ID: " + this->get_student_id() + "\n";
	return result;
}