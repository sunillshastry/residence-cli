#include <iostream>
#include "./../include/Person.h"
#include "./../util/run_test.h"

using std::cout;
using std::endl;
using std::string;
int main()
{
	string expected = "", result = "";

	// Create a person
	Person person("Harry", "abc123");

	// TEST 1
	expected = "Harry";
	result = person.get_name();
	run_test(expected, result);

	// TEST 2
	expected = "abc123";
	result = person.get_social_insurance_number();
	run_test(expected, result);

	// TEST 3
	person.set_name("Ron");
	expected = "Ron";
	result = person.get_name();
	run_test(expected, result);

	// TEST 4
	person.set_social_insurance_number("ron100");
	expected = "ron100";
	result = person.get_social_insurance_number();
	run_test(expected, result);

	// TEST 5
	expected = "Name: Ron\nSocial Insurance Number: ron100\n";
	result = person.to_string();
	run_test(expected, result);
}