#include <iostream>
#include "run_test.h"

/**
 * Compares two given string values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value (string)
 * @param result The value returned from the function/method (string)
 * @param method The name of the method/function with the class name. (string)
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

/**
 * Compares two given integer values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value (integer)
 * @param result The value returned from the function/method (integer)
 * @param method The name of the method/function with the class name. (string)
 */
void run_test(int expected, int result, std::string method = "(Method not available)")
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

/**
 * Compares two given boolean values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value (boolean)
 * @param result The value returned from the function/method (boolean)
 * @param method The name of the method/function with the class name. (string)
 */
void run_test(bool expected, bool result, std::string method = "(Method not available)")
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