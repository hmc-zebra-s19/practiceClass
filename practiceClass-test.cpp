/**
 * \file intlist-test.cpp
 * \authors CS 70 Starter Code
 * \brief The program unit tests the IntList class.
 *
 * \details Part of the CS 70 IntList assignment.
 */

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "practiceClass.hpp"
#include "testing-logger.hpp"

///////////////////////////////////////////////////////////
//  TESTING
///////////////////////////////////////////////////////////

// ISSUE 2 TESTS

/** \brief Test default constructor for IntLists
 */
bool defaultConstructorTest() {
  // Set up the TestingLogger object
  TestingLogger log("default constructor");

  // Set up for your test
  // Add checks for things that should be true.
  affirm(0 == 0);

  // Print a summary of the all the affirmations and return true
  // if they were all successful.
  return log.summarize();
}


int main(int, char**) {
  TestingLogger alltests("All tests");

  affirm(defaultConstructorTest());

  // Print a summary of the all the affirmations and exit the program.

  if (alltests.summarize(true)) {
    return 0;  // Error code of 0 == Success!
  } else {
    return 2;  // Arbitrarily chosen exit code of 2 means tests failed.
  }
}
