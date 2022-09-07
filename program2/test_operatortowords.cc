// Copyright 2022 CSCE240
// unit tests for the OperatorToWords function
#include<operator_functions.h>
#include<iostream>
using std::cout;
using std::endl;

bool TestOperatorToWordsAddition() {
  return OperatorToWords('+') == "plus";
}
bool TestOperatorToWordsSubtraction() {
  return OperatorToWords('-') == "minus";
}
bool TestOperatorToWordsDivision() {
  return OperatorToWords('/') == "divided by";
}
bool TestOperatorToWordsInvalid1() {
  return OperatorToWords('^') == "??";
}

int main() {
  int return_value = 0;
  if ( TestOperatorToWordsAddition() ) {
    cout << "Passed TestOperatorToWordsAddition"
         << endl;
  } else {
    cout << "Failed TestOperatorToWordsAddition"
         << endl;
    ++return_value;
  }
  if ( TestOperatorToWordsSubtraction() ) {
    cout << "Passed TestOperatorToWordsSubtraction"
         << endl;
  } else {
    cout << "Failed TestOperatorToWordsSubtraction"
         << endl;
    ++return_value;
  }
  if ( TestOperatorToWordsDivision() ) {
    cout << "Passed TestOperatorToWordsDivision"
         << endl;
  } else {
    cout << "Failed TestOperatorToWordsDivision"
         << endl;
    ++return_value;
  }
  if ( TestOperatorToWordsInvalid1() ) {
    cout << "Passed TestOperatorToWordsInvalid1"
         << endl;
  } else {
    cout << "Failed TestOperatorToWordsInvalid1"
         << endl;
    ++return_value;
  }
  cout << "Failed " << return_value << " tests" << endl;
  return return_value;
}
