#include <iostream>

#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "Person.h"

/**
 * A Student representation of a Student, includes the name, id number and bed label for the residence.
 * Inherits from the Person class.
 */
class Student : public Person
{
private:
	/** The bed label of the bed assigned to the student at the residence, initially -1 (null value) */
	int bed_label;

	/** The unique student identity number of a Student object */
	std::string student_id;

public:
	// Constructor
	/** The default constructor with a single parameter, having the student's student identity */
	Student(std::string student_id);
	/** The main constructor for the Student class, consisting of three arguments assigned to their
	 * respective attributes
	 */
	Student(std::string name, std::string social_insurance_number, std::string student_id);

	// Accessor methods
	/** Returns the bed label value assigned to the student at the residence */
	int get_bed_label();
	/** Returns the unique student identity number assigned to the student */
	std::string get_student_id();

	// Mutator methods
	/** Sets the bed label of ths student at the residence to a new bed label */
	void set_bed_label(int bed_label);

	// Summary methods
	/** Returns a summary of all the details of the student */
	std::string to_string();
};

#endif