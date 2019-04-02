/**
 * \file intlist.hpp
 * \authors YOUR ALIASES HERE
 * \brief A list of ints.
 *
 */

#ifndef PRACTICECLASS_HPP_INCLUDED
#define PRACTICECLASS_HPP_INCLUDED 1

#include <cstddef>
#include <iostream>

/**
 * \class IntList
 *
 * \brief A linked list of many Element objects which hold \c ints.
 *
 * \details Class allocates memory dynamically; thus can't use C++'s
 *          defaults for copy constructor, assignment operator and
 *          destructor.
 */
class practiceClass {
public:
  practiceClass();
  practiceClass(const practiceClass& orig);
  practiceClass& operator=(const practiceClass& rhs);
  ~practiceClass();

  int addOne();
  int getNumber() const;

private:
  struct numberHolder{
    numberHolder(int number);
    numberHolder() = delete;
    numberHolder(const numberHolder&) = delete;
    ~numberHolder() = default;

    int number_;
  };

  numberHolder *numberPtr_;
};

#endif  // INTLIST_HPP_INCLUDED
