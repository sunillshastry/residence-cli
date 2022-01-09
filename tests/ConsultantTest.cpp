#include <iostream>
#include "./../include/Consultant.h"
#include "./../util/run_test.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	string expected = "", result = "";

	// Create a consultant object.
	Consultant consultant("Samwell Tarly", "89356", "kings-landing-450");

	// TEST 1
	expected = "Samwell Tarly";
	result = consultant.get_name();
	run_test(expected, result, "Consultant.get_name() : Manager");

	// TEST 2
	expected = "89356";
	result = consultant.get_social_insurance_number();
	run_test(expected, result, "Consultant.get_social_insurance_number() : Manager");
	return 0;
}