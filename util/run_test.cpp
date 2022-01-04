#include <iostream>
#include "run_test.h"

/**
 * Compares the given values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value
 * @param result The value returned from the function/method
 * @param method The name of the method/function with the class name.
 */
void run_test(std::string expected, std::string result, std::string method = "(Method not available)")
{
	if (expected != result)
	{
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << "Expected: " << expected << ". Result: " << result << std::endl;
		std::cout << "Bug detected in" << method << " method" << std::endl;
	}
	else
	{
		std::cout << "TEST PASSED!" << std::endl;
	}
}