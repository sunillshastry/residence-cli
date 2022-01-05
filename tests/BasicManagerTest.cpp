#include <iostream>
#include "./../include/BasicManager.h"
#include "./../include/Person.h"
#include "./../util/run_test.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	string expected = "", result = "";

	// Create a BasicManager
	BasicManager basic_manager("Hagrid", "89054", "gryffindor123");

	// TEST 1
	expected = "Hagrid";
	result = basic_manager.get_name();
	run_test(expected, result, "BasicManager.get_name() : Person");

	// TEST 2
	expected = "89054";
	result = basic_manager.get_social_insurance_number();
	run_test(expected, result, "BasicManager.get_social_insurance_number() : Person");

	// TEST 3
	expected = "gryffindor123";
	result = basic_manager.get_employee_id();
	run_test(expected, result, "BasicManager.get_employee_id()");

	// TEST 4
	basic_manager.set_name("Albus Dumbledore");
	expected = "Albus Dumbledore";
	result = basic_manager.get_name();
	run_test(expected, result, "BasicManager.set_name() : Person");

	// TEST 5
	basic_manager.set_social_insurance_number("314587");
	expected = "314587";
	result = basic_manager.get_social_insurance_number();
	run_test(expected, result, "BasicManager.set_social_insurance_number() : Person");

	return 0;
}