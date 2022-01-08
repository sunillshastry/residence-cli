#include <iostream>
#include "./../include/Student.h"
#include "./../util/run_test.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	string expected = "", result = "";

	// Create a new Student object
	Student student("Neville Longbottom", "78934", "gry562");

	// TEST 1
	expected = "Neville Longbottom";
	result = student.get_name();
	run_test(expected, result, "Student.get_name() : Person");
	return 0;
}