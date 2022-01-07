#include <iostream>

#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "Person.h"

class Student : public Person
{
private:
	int bed_label;
	std::string student_id;

public:
	// Constructor
	Student(std::string student_id);
	Student(std::string name, std::string social_insurance_number, std::string student_id);

	// Accessor methods
	int get_bed_label();
	std::string get_student_id();

	// Mutator methods
	void set_bed_label(int bed_label);

	// Summary methods
	std::string to_string();
};

#endif