#include <iostream>
#include <vector>
#include "Person.h"

#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student : public Person
{
private:
	std::string name;
	std::string social_insurance_number;
	std::string student_id;
	int bed_label;
	// vector<Manager> managers_list;

public:
	Student();
	Student(std::string name, std::string social_insurance_number, std::string student_id, int bed_label);

	int get_bed_label();
	std::string get_id();

	// void add_manager(Manager manager);
	// void remove_manager(std::string employee_id);
	// bool has_manager(std::string employee_id);
	// vector<Manager> get_manager_list();

	void set_bed_label(int bed_label);

	std::string to_string();
};

#endif