// Copyright 2022 Mitchell Jonker



#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;  // needed to use the ios function setting below.

int main() {
  
  // Loops in C++
  // While Loop, For Loop, Do While Loop
  /*
  int number, digits = 0;
  cout << "Enter a positive integer: ";
  cin >> number;
  
  while (number > 0) {
    int digit = number % 10;
    number /= 10;
    
    if (digit == 0) {
      continue;
    }
    ++digits;
    
  }
  
  cout << digits << endl;
  */
  
  
  
  
  
  
  
  
  
  
  
  // Mini IF-Statement (used below in the ouput)
  // (condition = value ? ActionIfTrue : ActionIfFalse)
  /*
  cout << "Enter your height in feet and inches: ";
  int height_feet, height_inches;
  cin >> height_feet >> height_inches;
  cout << "That's " << height_feet << " feet and " << height_inches << " inch" << (height_inches == 1 ? "\n" : "es\n");
  */
  
  
  
  // Case Logic Structure
  // the value on the inside of the () needs to be a whole number type or boolean.
  /*
  char x;
  cin >> x;
  switch(x) {
    case 'a':
      cout << "1\n";
      cout << "2\n";
      break;
    case 'b':
      cout << "3\n";
      cout << "4\n";
      break;
    default:
      cout << "end\n";
  }
  */
  
  
  
  // Logical Operators: NOT = !, AND = &&, OR = ||
  // Relational Operators: <, <=, >, >=, ==, !=
  // && = AND, where it will evaluate as little as needed (if the left side is false, then no reason to check if the right is true for an AND). This works from left to right.
  // & = AND, where it will evaluate both sides even if the first is false.
  // || = OR, where it will skip checking the second half if the first is true. (since the second's is then irrelevant).
  // | = OR, where it will check both even if the first is true.
  
  /*
  int x = 1;
  int y = 1;
  */
  //cout << ++x << "\n" << x++ << endl;
  
  /*
  if((++x < 0) && (++y > 0)) {
    cout << "Evaluated to true" << endl;
  
  }
  else {
    cout << "False";
    cout << endl;
    
  }
  
  cout << x << "\n" << y << endl;
  */
  
  
  
  // Scientific Notation, and decimal cutoff
  /*
  double x = 0.000000003;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(10);
  cout << x << endl;
  */
  
  
  
  // Integers
  /*
  int x, y;
  cout << "Input an integer: ";
  cin >> x >> y;
  cout << " x / y = " << x / y << endl;
  */
  
  
  
  // Doubles
  /*
  double feet;
  cout << "Enter your height in feet\n  ft\r";
  cin >> feet;
  cout << "You entered: " << feet << " ft" << endl;
  */
  
  
  
  // Characters
  /*
  char letter1, letter2;
  cout << "Enter two characters ";
  cin >> letter1 >> letter2;
  cout << "I read: " << letter1 << " & " << letter2 << endl;
  */
  
  
  
  return 0;
  
}
