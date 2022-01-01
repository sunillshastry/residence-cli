#include <iostream>

#ifndef __PERSON_H__
#define __PERSON_H__

/**
 * A model of a Person as a class consisting of of a name and SIN attribute with accessor and
 * mutator methods
 */
class Person
{
private:
	/** Name of the person : string */
	std::string name;

	/** Social insurance number of the person : string */
	std::string social_insurance_number;

public:
	// Constructors
	/** A default constructor that initialises the attributes to nullable values */
	Person();
	/** The main constructor that initialises the attributes as the argument values */
	Person(std::string name, std::string social_insurance_number);

	// Accessor methods
	/** Retrieves the name of the person */
	std::string get_name();
	/** Retrieves the social insurance number of the person */
	std::string get_social_insurance_number();

	// Mutator methods
	/** Sets the name of the person to a new string value */
	void set_name(std::string name);
	/** Sets the social insurance number of the person to a new string value */
	void set_social_insurance_number(std::string social_insurance_number);

	// Status method
	/** Returns an entire person summary as a string suitable for printing/displaying purpose */
	void to_string();
};

#endif