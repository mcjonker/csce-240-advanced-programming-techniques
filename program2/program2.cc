// Copyright 2022 Mitchell Jonker

#include "operator_functions.h"
#include "operator_functions.cc"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>  // File Stream

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;  // Input Stream Class

int main() {
  
  double left;
  char aop;
  double right;
  double result;
  int i = 0;
  double LastLeft = 0;
  char LastAop = 0;
  double LastRight = 0;
  bool Skip = false;
  ifstream input_file("arithmetic_expressions.txt");
  
  while(input_file.good()) {
    
    input_file >> left >> aop >> right;
    
    if(i != 0 && LastLeft == left && LastAop == aop && LastRight == right) {
      Skip = true;
    }
    if(!Skip) {
      bool AopErr = IsArithmeticOperator(aop);
      
      if(!AopErr) {
        // If Operator is not valid, do not attempt to compute.
        cout << "Unrecognized operation " << aop << endl;
      }
      else {
        // Operator is valid at this point
        string AopString = OperatorToWords(aop);
        
        bool ComputeErr = Compute(left, aop, right, result);
        
        if(!ComputeErr) {
          cout << "Could not compute " << left << " " << aop << " " << right << endl;
        }
        else {
          cout << left << " " << AopString << " " << right << " is " << result << endl;
        }
      }
      
      LastLeft = left;
      LastAop = aop;
      LastRight = right;
      i++;
    }
  }
  
  
  
  
  
  /*
  
  
  cout << "left: ";
  cin >> left;
  cout << "aop: ";
  cin >> aop;
  cout << "right: ";
  cin >> right;
  cout << endl;
  
  bool err = Compute(left, aop, right, result);
  cout << "Result: " << result << endl << "Bool: " << err << endl;
  */
  
  
  return 0;
  
}
