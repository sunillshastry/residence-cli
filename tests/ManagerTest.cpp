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

	// TEST 4
	// Testing the Student-Manager relationship methods
	// Creating two Student objects for testing purpose!
	// Student student1("General Kenobi", "516ubc", "genken101", 0);
	// Student student2("Kylo Ren", "313ec", "kyren200", 1);

	// manager.add_student(student1);
	// expected = true;
	// result = manager.has_student(student1.get_id());
	// run_test(expected, result, "Manager.add_student() | Manager.has_student()");

	// TEST 5
	// expected = false;
	// result = manager.has_student(student2.get_id());
	// run_test(expected, result, "Manager.has_student()");

	// TEST 6
	// manager.remove_student(student1.get_id());
	// expected = false;
	// result = manager.has_student(student1.get_id());
	// run_test(expected, result, "Manager.remove_student()");

	// TEST 7
	expected = "Name: Darth Vader\nSocial Insurance Number: 33s476\nEmployee ID: emp-139\n";
	// List of students: \nNo students associated\n";
	result = manager.to_string();
	run_test(expected, result, "Manager.to_string()");
	return 0;
}