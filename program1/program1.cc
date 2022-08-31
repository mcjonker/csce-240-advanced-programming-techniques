// Copyright 2022 Mitchell Jonker

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  bool FunctionalEntry = true;
  
  string input = "";
  cout << "Input: ";
  cin >> input;
  
  int i = 0;
  
  while(i < input.length()) {
    bool BaseFound = false;
    bool ValueFound = false;
    
    if(input[i] != " " && BaseFound == false) {
      base = base+input[i]
    } else BaseFound = true;
    
    
    cout << "Val = " << input[i] << endl;
    
    i++;
  }
  
  /*
  cin >> test >> test2;
  cout << "Output: " << test << " | " << test2 << endl;
  
  
  
  
  
  
  if(test2 > 9 || test2 < 2) {
    cout << "Base not accepted" << endl;
    return 0;
  }
  
  */
  
  return 0;
  
}
