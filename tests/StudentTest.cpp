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

	// TEST 2
	expected = "78934";
	result = student.get_social_insurance_number();
	run_test(expected, result, "Student.get_social_insurance_number() : Person");

	// TEST 3
	expected = "gry562";
	result = student.get_student_id();
	run_test(expected, result, "Student.get_student_id()");

	// TEST 4
	expected = -1;
	result = student.get_bed_label();
	run_test(expected, result, "Student.get_bed_label()");

	// TEST 5
	student.set_bed_label(15);
	expected = 15;
	result = student.get_bed_label();
	run_test(expected, result, "Student.get_bed_label() & Student.set_bed_label()");

	// TEST 6
	expected = "Student Name: Neville Longbottom\nSocial Insurance Number: 78934\nBed Label: 15\nStudent ID: gry562\n";
	result = student.to_string();
	run_test(expected, result, "Student.to_string()");

	return 0;
}