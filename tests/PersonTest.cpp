#include <iostream>
#include "./../include/Person.h"

using std::cout;
using std::endl;
using std::string;

/**
 * Compares the given values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value
 * @param result The value returned from the function/method
 * @param method The name of the method/function with the class name.
 */
void run_test(string expected, string result, string method = "(Method not available)")
{
	if (expected != result)
	{
		cout << "TEST FAILED!" << endl;
		cout << "Expected: " << expected << ". Result: " << result << endl;
		cout << "Bug detected in" << method << " method" << endl;
	}
	else
	{
		cout << "TEST PASSED!" << endl;
	}
}

// void run_test(int expected, int result, string method = "(Method not available)") {}

int main()
{
	string expected = "", result = "";

	// Create a person
	Person person("Harry", "abc123");

	// TEST 1
	expected = "Harry";
	result = person.get_name();
	run_test(expected, result, "Person.get_name()");

	// TEST 2
	expected = "abc123";
	result = person.get_social_insurance_number();
	run_test(expected, result, "Person.get_social_insurance_number()");

	// TEST 3
	person.set_name("Ron");
	expected = "Ron";
	result = person.get_name();
	run_test(expected, result, "Person.set_name()");

	// TEST 4
	person.set_social_insurance_number("ron100");
	expected = "ron100";
	result = person.get_social_insurance_number();
	run_test(expected, result, "Person.set_social_insurance_number()");

	// TEST 5
	expected = "Name: Ron\nSocial Insurance Number: ron100";
	result = person.to_string();
	run_test(expected, result, "Person.to_string()");
}