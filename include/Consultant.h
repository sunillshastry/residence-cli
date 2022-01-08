#include <iostream>

#ifndef __CONSULTANT_H__
#define __CONSULTANT_H__
#include "Manager.h"

class Consultant : public Manager
{
public:
	Consultant();
	Consultant(std::string name, std::string social_insurance_number, std::string employee_id);

	std::string to_string();
}

#endif