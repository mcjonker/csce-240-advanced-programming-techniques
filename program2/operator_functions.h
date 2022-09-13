// Copyright 2022 Mitchell Jonker
// This file contains the prototypes for the operator functions.

#ifndef _OPERATOR_FUNCTIONS_H_
#define _OPERATOR_FUNCTIONS_H_
#include <string>
using std::string;
bool IsInteger(double value);
bool IsArithmeticOperator(char value);
string OperatorToWords(char value);
bool Compute(double left, char aop, double right, double& result);
#endif  // _OPERATOR_FUNCTONS_H_
