// Copyright 2022 CSCE240
// unit tests for the IsInteger function
#include"operator_functions.h"
#include"operator_functions.cc"
#include<iostream>
using std::cout;
using std::endl;

bool TestIsIntegerTrue1() {
  return IsInteger(8.0);
}
bool TestIsIntegerTrue2() {
  double x = -5;
  return IsInteger(x);
}
bool TestIsIntegerFalse1() {
  return !IsInteger(12.004);
}
bool TestIsIntegerFalse2() {
  double x = -2.3;
  return !IsInteger(x);
}

int main() {
  int return_value = 0;
  if ( TestIsIntegerTrue1() ) {
    cout << "Passed TestIsIntegerTrue1"
         << endl;
  } else {
    cout << "Failed TestIsIntegerTrue1"
         << endl;
    ++return_value;
  }
  if ( TestIsIntegerTrue2() ) {
    cout << "Passed TestIsIntegerTrue2"
         << endl;
  } else {
    cout << "Failed TestIsIntegerTrue2"
         << endl;
    ++return_value;
  }
  if ( TestIsIntegerFalse1() ) {
    cout << "Passed TestIsIntegerFalse1"
         << endl;
  } else {
    cout << "Failed TestIsIntegerFalse1"
         << endl;
    ++return_value;
  }
  if ( TestIsIntegerFalse2() ) {
    cout << "Passed TestIsIntegerFalse2"
         << endl;
  } else {
    cout << "Failed TestIsIntegerFalse2"
         << endl;
    ++return_value;
  }
  cout << "Failed " << return_value << " tests" << endl;
  return return_value;
}
