// Copyright 2022 CSCE240
// unit tests for the Compute function
#include<operator_functions.h>
#include<iostream>
using std::cout;
using std::endl;

// test a valid addition - should return true and set
// answer to the sum
bool TestComputeAddition1() {
  double x = 4.5, y = 3.7, answer;
  bool return_value = Compute(x, '+', y, answer);
  return return_value && (answer == x + y);
}

// test a valid subtraction - should return true and set
// answer to the difference
bool TestComputeSubtraction1() {
  double x = -4.5, y = -3.7, answer;
  bool return_value = Compute(x, '-', y, answer);
  return return_value && (answer == x - y);
}

// test a valid multiplication - should return true and set
// answer to the product
bool TestComputeMultiplication1() {
  double x = 0.1, y = 3.7, answer;
  bool return_value = Compute(x, '*', y, answer);
  return return_value && (answer == x * y);
}

// test a valid division - should return true and set
// answer to the result of the real division
bool TestComputeDivisionGood1() {
  double x = 3.2, y = 1.6, answer;
  bool return_value = Compute(x, '/', y, answer);
  return return_value && (answer == x / y);
}

// test dividing by zero - should return false and set
// answer to 0
bool TestComputeDivisionBad1() {
  double answer;
  bool return_value = Compute(5.6, '/', 0, answer);
  return !return_value && answer == 0;
}

// test a valid modulus - should return true and set
// answer to the remainder
bool TestComputeModulusGood1() {
  double x = 13, y = 4, answer;
  bool return_value = Compute(x, '%', y, answer);
  return return_value && answer == 1;
}

// test modular division by zero - should return false and
// set answer to 0
bool TestComputeModulusBad1() {
  double answer;
  bool return_value = Compute(3, '%', 0, answer);
  return !return_value && answer == 0;
}

// test modular division by non-itegers - should return
// false and set answer to 0
bool TestComputeModulusBad2() {
  double answer;
  bool return_value = Compute(8, '&', 1.7, answer);
  return !return_value && answer == 0;
}

int main() {
  int return_value = 0;
  if ( TestComputeAddition1() ) {
    cout << "Passed TestComputeAddition1"
         << endl;
  } else {
    cout << "Failed TestComputeAddition1"
         << endl;
    ++return_value;
  }
  if ( TestComputeSubtraction1() ) {
    cout << "Passed TestComputeSubtraction1"
         << endl;
  } else {
    cout << "Failed TestComputeSubtraction1"
         << endl;
    ++return_value;
  }
  if ( TestComputeMultiplication1() ) {
    cout << "Passed TestComputeMultiplication1"
         << endl;
  } else {
    cout << "Failed TestComputeMultiplication1"
         << endl;
    ++return_value;
  }
  if ( TestComputeDivisionGood1() ) {
    cout << "Passed TestComputeDivisionGood1"
         << endl;
  } else {
    cout << "Failed TestComputeDivisionGood1"
         << endl;
    ++return_value;
  }
  if ( TestComputeDivisionBad1() ) {
    cout << "Passed TestComputeDivisionBad1"
         << endl;
  } else {
    cout << "Failed TestComputeDivisionBad1"
         << endl;
    ++return_value;
  }
  if ( TestComputeModulusGood1() ) {
    cout << "Passed TestComputeModulusGood1"
         << endl;
  } else {
    cout << "Failed TestComputeModulusGood1"
         << endl;
    ++return_value;
  }
  if ( TestComputeModulusBad1() ) {
    cout << "Passed TestComputeModulusBad1"
         << endl;
  } else {
    cout << "Failed TestComputeModulusBad1"
         << endl;
    ++return_value;
  }
  if ( TestComputeModulusBad2() ) {
    cout << "Passed TestComputeModulusBad2"
         << endl;
  } else {
    cout << "Failed TestComputeModulusBad2"
         << endl;
    ++return_value;
  }
  cout << "Failed " << return_value << " tests" << endl;
  return return_value;
}
