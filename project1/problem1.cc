// Copyright 2022 Mitchell Jonker
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
  // Initalize needed variables
  int First = 0;
  int Second = 0;
  int TempNum = 1;
  bool TempBool;
  bool FirstIsNeg = false;
  bool SecondIsNeg = false;
  // Intake Values
  cin >> First >> Second;
  if (First < 0) {  // Temporarily make value positive, if negative.
    First = -1*First;
    FirstIsNeg = true;
  }
  if (Second < 0) {  // Temporarily make value positive, if negative.
    Second = -1*Second;
    SecondIsNeg = true;
  }
  // Insure that the first number is the greater value.
  if (Second > First) {
    TempNum = Second;
    Second = First;
    First = TempNum;
    TempBool = SecondIsNeg;
    SecondIsNeg = FirstIsNeg;
    FirstIsNeg = TempBool;
  }
  if (FirstIsNeg) {  // If value was negative, make it negative again.
    First = -1*First;
  }
  if (SecondIsNeg) {  // If value was negative, make it negative again.
    Second = -1*Second;
  }
  TempNum = TempNum - TempNum;
  // Record Modulo and Division Answer for output purposes.
  int ModResult = First % Second;
  int DivResult = First / Second;
  // Select output depending on if value is a multiple or not.
  if (ModResult == 0) {
    cout << First << " is " << DivResult << " times " << Second << endl;
  } else {
    cout << First << " is not a multiple of " << Second << endl;
  }
  return 0;
}
