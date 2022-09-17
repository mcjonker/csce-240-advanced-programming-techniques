// Copyright 2022 Mitchell Jonker
// This file contains the implementations for the functions prototyped.
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <string>
#include "problem3.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;

int main() {
  int input, num;
  cout << "This Tester Main Method is running to test MWRD function only."
  << endl;
  cout << "IN: ";
  cin >> input >> num;
  int output = MatchWithReverseDigits(input, num);
  cout << "OUT: " << output << endl;
  return 0;
}
int Reverse(int value) {
  bool IsNegative = false;
  int output;
  // Record if the value is negative or not.
  if (value < 0) {
    IsNegative = true;
    value = -1 * value;
  }
  stringstream ss;
  string SwappedString;
  string NumString;
  ss << value;
  ss >> NumString;
  // Clear the stream
  ss.str("");
  ss.clear();
  int StringLength = NumString.length();
  int i = 1;
  while (i < StringLength+1) {
    ss << NumString[StringLength-i];
    i++;
  }
  ss >> SwappedString;
  // Clear the Stream
  ss.clear();
  ss.str("");
  ss.str(SwappedString);
  ss >> output;
  if (IsNegative) {
    output = -1 * output;
  }
  return output;
}
int Reverse(int value, int flips) {
  bool IsNegative = false;
  bool MoreZeros = false;
  string NumString;
  string SwappedString;
  stringstream ss;
  int AddZeros = 0;
  int LoopCount;
  int output;
  // Record if the value is negative or not.
  if (value < 0) {
    IsNegative = true;
    value = -1 * value;
  }
  // Insure flips var is valid.
  if (flips < 2) {
    return value;
  }
  ss << value;
  ss >> NumString;
  int StringLength = NumString.length();
  // If flips are equal to length, return simple reverse.
  if (flips == StringLength) {
    output = Reverse(value);
    return output;
  }
  if (flips > StringLength) {
    MoreZeros = true;
    AddZeros = flips-StringLength;
    LoopCount = StringLength;
  } else {
    LoopCount = flips;
  }
  AddZeros = AddZeros + 0;
  // Clear the stream
  ss.str("");
  ss.clear();
  int i = 0;
  // Add unswapped values
  while (i < StringLength-flips && !MoreZeros) {
    ss << NumString[i];
    i++;
  }
  i = 0;
  // Add other values in reversed order
  while (i < LoopCount && !MoreZeros) {
    ss << NumString[StringLength-i-1];
    i++;
  }
  i = 0;
  if (MoreZeros) {
    int temp = Reverse(value);
    temp = temp * pow(10, AddZeros);
    ss << temp;
  }
  ss >> SwappedString;
  // Clear the stream
  ss.str("");
  ss.clear();
  ss.str(SwappedString);
  ss >> output;
  if (IsNegative) {
    output = -1 * output;
  }
  return output;
}
int MatchWithReverseDigits(int value, int compare) {
  int ValueLength;
  int CompareLength;
  int MaxLength;
  bool DoubleNeg = false;
  // Use SS to find strings and respective lengths.
  string ValueString;
  string CompareString;
  stringstream ss;
  ss << value;
  ss >> ValueString;
  // Clear the stream
  ss.str("");
  ss.clear();
  ss << compare;
  ss >> CompareString;
  CompareLength = CompareString.length();
  ValueLength = ValueString.length();
  // Clear the stream
  ss.str("");
  ss.clear();
  // Determine if both values are negative.
  if (value < 0 && compare < 0) {
    DoubleNeg = true;
  }
  if ((value < 0 && compare > 0) || (value > 0 && compare < 0)) {
    return -1;
  }
  if (CompareLength > ValueLength) {
    MaxLength = CompareLength;
  } else {
    MaxLength = ValueLength;
  }
  if (value == compare) {
    return 0;
  }
  // Reverse Inputted Values
  int ReverseValue = Reverse(value);
  int ReverseCompare = Reverse(compare);
  // Compare Across Reversals
  if (ReverseValue == compare) {
    if (DoubleNeg) {
      return ValueLength-1;
    }
    return ValueLength;
  }
  if (ReverseCompare == value) {
    if (DoubleNeg) {
      return ValueLength-1;
    }
    return CompareLength;
  }
  int j = 0;
  while (j < MaxLength) {
    if (Reverse(value, j) == compare) {
      return j;
    }
    j++;
  }
  return -1;
}
