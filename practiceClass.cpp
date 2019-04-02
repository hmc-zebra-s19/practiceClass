/*
 * \file intlist.cpp
 * \authors YOUR ALIASES HERE
 * \brief Implemenation of IntList and its private classes.
 */

#include <utility>

#include "practiceClass.hpp"
#include "testing-logger.hpp"

practiceClass::practiceClass() : numberPtr_(new numberHolder(0)){
}

practiceClass::practiceClass(const practiceClass& orig){
  numberPtr_->number_ = orig.numberPtr_->number_;
}

practiceClass::practiceClass& operator=(const practiceClass& rhs){
  if (numberPtr_->number_ == orig.numberPtr_->number_){
    return true;
  } else {
    return false;
  }
}
practiceClass::~practiceClass(){
  delete numberPtr_;
}

int practiceClass::addOne(){
  numberPtr_->number_ += 1;
  return numberPtr_-.number_;
}
int practiceClass::getNumber() const{
  return numberPtr_-.number_;
}
