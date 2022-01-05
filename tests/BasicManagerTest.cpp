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
	BasicManager basic_manager("Hagrid", "gryffindor123", "gry555");

	// TEST 1
	expected = "Hagrid";
	result = basic_manager.get_name();
	run_test(expected, result, "BasicManager.get_name() : Person");

	return 0;
}