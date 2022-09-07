// Copyright 2022 CSCE240
// unit tests for the IsArithmeticOperator function
#include<operator_functions.h>
#include<iostream>
using std::cout;
using std::endl;

bool TestIsArithmeticOperatorAddition() {
  return IsArithmeticOperator('+');
}
bool TestIsArithmeticOperatorSubtraction() {
  return IsArithmeticOperator('-');
}
bool TestIsArithmeticOperatorBad1() {
  return !IsArithmeticOperator('^');
}
bool TestIsArithmeticOperatorBad2() {
  return !IsArithmeticOperator('x');
}

int main() {
  int return_value = 0;
  if ( TestIsArithmeticOperatorAddition() ) {
    cout << "Passed TestIsArithmeticOperatorAddition"
         << endl;
  } else {
    cout << "Failed TestIsArithmeticOperatorAddition"
         << endl;
    ++return_value;
  }
  if ( TestIsArithmeticOperatorSubtraction() ) {
    cout << "Passed TestIsArithmeticOperatorSubtraction"
         << endl;
  } else {
    cout << "Failed TestIsArithmeticOperatorSubtraction"
         << endl;
    ++return_value;
  }
  if ( TestIsArithmeticOperatorBad1() ) {
    cout << "Passed TestIsArithmeticOperatorBad1"
         << endl;
  } else {
    cout << "Failed TestIsArithmeticOperatorBad1"
         << endl;
    ++return_value;
  }
  if ( TestIsArithmeticOperatorBad2() ) {
    cout << "Passed TestIsArithmeticOperatorBad2"
         << endl;
  } else {
    cout << "Failed TestIsArithmeticOperatorBad2"
         << endl;
    ++return_value;
  }
  cout << "Failed " << return_value << " tests" << endl;
  return return_value;
}
