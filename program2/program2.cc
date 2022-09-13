// Copyright 2022 Mitchell Jonker
// #include "operator_functions.cc"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>  // File Stream
#include "./operator_functions.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;  // Input Stream Class
int main() {
  // Init variables
  double left;
  double right;
  double result;
  double LastLeft = 0;
  char LastAop = 0;
  double LastRight = 0;
  int i = 0;
  bool Skip = false;
  bool AopValid;
  // String of Arithmetic Operator
  string Saop;
  // Input File Stream
  ifstream input_file("arithmetic_expressions.txt");
  while (input_file.good()) {
    input_file >> left >> Saop >> right;
    char aop = static_cast<char>(Saop[0]);
    if (Saop.length() > 1) {
      AopValid = false;
    } else {
      AopValid = true;
    }
    if (i != 0 && LastLeft == left && LastAop == aop && LastRight == right) {
      Skip = true;
    }
    if (!Skip) {
      if (AopValid) {
        AopValid = IsArithmeticOperator(aop);
      }
      if (!AopValid) {
        // If Operator is not valid, do not attempt to compute.
        cout << "Unrecognized operation " << Saop << endl;
      } else {
        // Operator is valid at this point
        string AopString = OperatorToWords(aop);
        bool ComputeErr = Compute(left, aop, right, result);
        if (!ComputeErr) {
          cout << "Could not compute " << left << " " << AopString
          << " " << right << endl;
        } else {
          cout << left << " " << AopString << " " << right
          << " equals " << result << endl;
        }
      }
      LastLeft = left;
      LastAop = aop;
      LastRight = right;
      i++;
    }
  }
  return 0;
}
