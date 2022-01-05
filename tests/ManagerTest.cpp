#include <iostream>
#include "./../include/Manager.h"
#include "./../include/BasicManager.h"
#include "./../include/Student.h"
#include "./../util/run_test.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	string expected = "", result = "";

	// Create a new Manager
	Manager manager("Darth Vader", "33s476", "emp-139");

	// TEST 1
	expected = "Darth Vader";
	result = manager.get_name();
	run_test(expected, result, "Manager.get_name() : BasicManager");

	// TEST 2
	expected = "33s476";
	result = manager.get_social_insurance_number();
	run_test(expected, result, "Manger.get_social_insurance_number() : BasicManager");

	// TEST 3
	expected = "emp-139";
	result = manager.get_employee_id();
	run_test(expected, result, "Manager.get_employee_id() : BasicManager");

	return 0;
}