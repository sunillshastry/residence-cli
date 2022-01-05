#include <iostream>
#include <vector>
#include "BasicManager.h"
#include "Student.h"

#ifndef __MANAGER_H__
#define __MANAGER_H__

class Manager : public BasicManager
{
private:
	std::vector<Student> students_list;

public:
	Manager();
	Manager(std::string name, std::string social_insurance_number, std::string employee_id);

	void add_student(Student student);
	void remove_student(std::string student_id);
	bool has_student(std::string student_id);

	std::string to_string();
};

#endif