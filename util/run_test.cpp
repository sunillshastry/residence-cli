#include <iostream>
#include "run_test.h"

/**
 * Compares two given string values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value (string)
 * @param result The value returned from the function/method (string)
 * @param method The name of the method/function with the class name. (string)
 */
void run_test(std::string expected, std::string result)
{
	if (expected != result)
	{
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << "Expected: " << expected << ". Result: " << result << std::endl;
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
void run_test(int expected, int result)
{
	if (expected != result)
	{
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << "Expected: " << expected << ". Result: " << result << std::endl;
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
void run_test(bool expected, bool result)
{
	if (expected != result)
	{
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << "Expected: " << expected << ". Result: " << result << std::endl;
	}
	else
	{
		std::cout << "TEST PASSED!" << std::endl;
	}
}

/**
 * Compares two given floating values and displays the according message.
 * Tests only for strings values
 * @param expected The user-expected value (double/float)
 * @param result The value returned from the function/method (double/float)
 * @param method The name of the method/function with the class name. (string)
 */
void run_test(double expected, double result)
{
	double diff = 0.01;
	double greater = (expected >= result) ? expected : result;
	double smaller = (expected >= result) ? result : expected;
	if ((greater - smaller) > diff)
	{
		std::cout << "TEST FAILED!" << std::endl;
		std::cout << "Expected: " << expected << ". Result: " << result << std::endl;
	}
	else
	{
		std::cout << "TEST PASSED!" << std::endl;
	}
}