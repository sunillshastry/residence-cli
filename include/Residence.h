#include <iostream>
#include <vector>

#ifndef __RESIDENCE_H__
#define __RESIDENCE_H__

/**
 * A residence class managing all the aspects of the residence information needed for a residence
 * management system
 */
class Residence
{
private:
	/** Name of the residence */
	std::string name;

	/** The external label of the first bed of the residence */
	int min_bed_label;

	/** The external label of the last bed of the residence */
	int max_bed_label;

	/** An array to represent the beds of the residence. Each bed is empty initially */
	// Student residence_beds[];

	// Utility Private methods for inner functionality
	int label_to_index(int label);
	int index_to_label(int index);

public:
	// Default and main constructor
	/** Default constructor that creates the Residence object and initialises all values to nullable */
	Residence();

	/**
	 * The main constructor that creates the Residence oject and initialises all values to the given
	 * arguments
	 */
	Residence(std::string name, int min_bed_label, int max_bed_label);

	// Accessor methods
	/** Retrieves the name of the residence */
	std::string get_name();

	/** Retrieves the external bed label of the first bed in residence */
	int get_min_bed_label();

	/** Retrieves the external bed label of the last bed in the residence */
	int get_max_bed_label();

	// Utility public methods
	/** Checks if a bed is occupied or not (null value or not) */
	bool is_occupied(int bed_label);

	/** Retrieves a student from a particular bed if it is taken and  valid */
	// Student get_student(int bed_label);

	/** Assigns a student to a bed if the bed is empty */
	// void assign_student(Student student, int bed_label);

	/** Returns a vector list of all the empty beds available at the residence */
	std::vector<int> available_beds();

	/** Removes a student from a bed, makes the bed empty */
	void free_bed(int bed_label);

	/** Checks if the bed label is a valid label with respect to the particular residence */
	bool is_valid_label(int label);

	/** Returns a whole summary of the residence object */
	std::string to_string();
};

#endif