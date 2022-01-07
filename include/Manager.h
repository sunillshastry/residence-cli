#include <iostream>
#include <vector>

#ifndef __MANAGER_H__
#define __MANAGER_H__

// #include "Student.h"
#include "Person.h"
#include "BasicManager.h"

/**
 * A class model of a Manager, a position slightly more advanced than the BasicManger.
 * Includes behavior to add, check and remove student from the list
 */
class Manager : public BasicManager
{
private:
	/** A list of all the student associated to a particular manager */
	// std::vector<Student> students_list;

public:
	// Constructors
	/** The default constructor for the Manager class. Initialises all values to null or zero */
	Manager();

	/** The main constructor for the Manager class. Initialises all values to their respective attributes */
	Manager(std::string name, std::string social_insurance_number, std::string employee_id);

	// Student-Manger relation methods
	/** Adds a student to the list of students */
	// void add_student(Student student);

	/** Removes a student from the list of students associated to the manager, if present */
	// void remove_student(std::string student_id);

	/** Checks if a student is already present in the list of student associated to the manager */
	// bool has_student(std::string student_id);

	/** Returns a summary of the manager, along with the students associated */
	std::string to_string();
};

#endif