// Copyright 2022 Mitchell Jonker
// This file contains the prototypes for the operator functions.

//#include <"operator_functions.h">

#ifdef _OPERATOR_FUNCTIONS_H_
#DEFINE _OPERATOR_FUNCTIONS_H_

bool IsInteger(double value);
bool IsArithmeticOperator(char value);
string OperatorToWords(char value);
bool Compute(double left, char aop, double right, double& result);

#endif 
