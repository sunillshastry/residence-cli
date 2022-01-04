#include <iostream>
#include <vector>
#include "Person.h"
// #include "Manager.h"

#ifndef __STUDENT_H__
#define __STUDENT_H__

/**
 * A class representing the Student object, extends the Person class
 */
class Student : public Person
{
private:
	/** The name of the Student */
	std::string name;

	/** The social insurance number of the Student */
	std::string social_insurance_number;

	/** The unique identity number of the Student */
	std::string student_id;

	/** The bed label assigned to the student in the residence */
	int bed_label;

	/** A list of all the managers associated with the particular Student */
	// vector<Manager> managers_list;

public:
	// Constructors
	/** The default constructor of the Student class, assigns all value to NULL or zero equivalent */
	Student();

	/** The main constructor of the Student class, assigns the argument to their equivalent attributes */
	Student(std::string name, std::string social_insurance_number, std::string student_id, int bed_label);

	// Accessor methods
	/** Returns the Student's bed label */
	int get_bed_label();

	/** Returns the Student's unique identity number */
	std::string get_id();

	// Student-Manager relation methods
	/** Adds a manager to the list of managers associated to the Student */
	// void add_manager(Manager manager);

	/** Removes a manager from the list of managers associated, if present */
	// void remove_manager(std::string employee_id);

	/**
	 * Checks if a manager is present in the list of managers, returns a boolean value to indicate
	 * the result
	 */
	// bool has_manager(std::string employee_id);

	/** Returns the entire list of managers consisting of all the managers associated */
	// vector<Manager> get_manager_list();

	// Mutator methods
	/** Sets a new bed label value to the Student */
	void set_bed_label(int bed_label);

	// Summary method
	/** Returns a summary of the Student object, includes name, id, SIN, manager list and bed label */
	std::string to_string();
};

#endif