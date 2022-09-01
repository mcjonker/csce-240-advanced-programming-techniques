// Copyright 2022 Mitchell Jonker

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

int main() {
  // Initalize Control Booleans
  bool FunctionalEntry = true;
  bool IsNegative = false;
  int Number;
  int Base;

  // cout << "Input: ";
  cin >> Number >> Base;

  // Number cannot be negative, convert if necessary.
  if (Number < 0) {
    IsNegative = true;
    Number = abs(Number);
  }

  // Confirm Base's Validity
  if (Base > 9 || Base < 2) {
    cout << "Base Not Accepted" << endl;
    return 0;
  }

  // Confirm Number's Validity.
  string NumberStr = to_string(Number);
  int Loop = 0;
  while (Loop < NumberStr.length() && FunctionalEntry == true) {
    // Values in the Number cannot be larger than the Base
    int NumberAt = static_cast<int>(NumberStr[Loop])-48;
    if (NumberAt >= Base) {
      // Trigger Function Boolean.
      FunctionalEntry = false;
      break;
    }
    Loop++;
  }
  if (FunctionalEntry == false) {
    cout << "Invalid Digit(s) In Number" << endl;
    return 0;
  }

  // Convert bases
  Loop = 0;
  int DecimalValue = 0;
  while (Loop < NumberStr.length() && FunctionalEntry == true) {
    int Exponent = NumberStr.length()-Loop;
    int NumberAt = static_cast<int>(NumberStr[Loop])-48;
    DecimalValue = DecimalValue + (NumberAt * pow(Base, Exponent-1));
    Loop++;
  }
  if (IsNegative == true) {
    DecimalValue = -1*DecimalValue;
  }
  // cout << "Output: " << DecimalValue << endl;
  cout << DecimalValue << endl;
  return 0;
}
