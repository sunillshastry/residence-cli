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
	return 0;
}