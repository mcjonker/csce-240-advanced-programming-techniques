// Copyright 2022 Mitchell Jonker
// This file contains the implementations of the operator functions.
#include <cmath>
#include <string>
#include <iostream>
#include "operator_functions.h"
using std::string;
bool IsInteger(double value) {
  // Duplicate value as integer & Compare. If Equal, return true.
  int ValueAsInt = floor(value);
  return value == ValueAsInt;
}
bool IsArithmeticOperator(char value) {
  // Return true if the char entered is equal to one of the valid operators.
  return value == '+' || value == '-' || value == '*'
  || value == '/' || value == '%';
}
string OperatorToWords(char value) {
  // If Operator is detected, return word-form, else return "??".
  if (value == '+') {
    return "plus";
  } else if (value == '-') {
    return "minus";
  } else if (value == '*') {
    return "times";
  } else if (value == '/') {
    return "divided by";
  } else if (value == '%') {
    return "modulo";
  } else {
    return "??";
  }
}
bool Compute(double left, char aop, double right, double& result) {
  // Insure the operator is valid before continuing.
  bool ValidAop = IsArithmeticOperator(aop);
  if (ValidAop == 0) {
    result = 0;
    return false;
  }
  if (aop == '+') {
    result = left + right;
  }
  if (aop == '-') {
    result = left - right;
  }
  if (aop == '*') {
    result = left * right;
  }
  if (aop == '/') {
    if (right == 0) {  // Divide by zero error
      result = 0;
      return false;
    } else {
      result = left / right;
    }
  }
  if (aop == '%') {
    bool ValidLeft = IsInteger(left);
    bool ValidRight = IsInteger(right);
    if (!ValidLeft || !ValidRight) {
      result = 0;
      return false;
    }
    if (right == 0) {  // Divide by zero error
      result = 0;
      return false;
    } else {
      int CastLeft = static_cast<int>(left);
      int CastRight = static_cast<int>(right);
      result = CastLeft % CastRight;
    }
  }
  return true;
}
