#include <iostream>

#ifndef __RUN_TEST_H__
#define __RUN_TEST_H__

/** Tests two strings to check if the test was successful or not */
void run_test(std::string expected, std::string result);

/** Tests two integers to check if the test was successful or not */
void run_test(int expected, int result);

/** Tests two booleans to check if the test was successful or not */
void run_test(bool expected, bool result);

/** Tests two floating values to check if the test was successful or not */
void run_test(double expected, double result);

#endif