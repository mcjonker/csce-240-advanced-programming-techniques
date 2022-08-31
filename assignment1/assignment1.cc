// Copyright 2022 Mitchell Jonker

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  bool functional = true;
  string input = "";
  //int test;
  //int test2;
  
  
  cout << "Input: ";
  cin >> input;
  cout << "OUT: " << input << endl;
  cout << input[2];
  cout << input.length() << endl;
  
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
