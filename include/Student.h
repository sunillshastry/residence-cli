#include <iostream>

#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "Person.h"

class Student : public Person
{
private:
	int bed_label;
	std::string student_id;
};

#endif