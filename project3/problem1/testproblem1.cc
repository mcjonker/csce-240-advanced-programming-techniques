// Copyright 2022 CSCE240 Exam 3 Problem 1 Test
#include<problem1.h>
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

int main() {
  const int kSize = 10;
  int inums[kSize] = { 1, 2, 3, 2, 1, 4, 7, 2, 9, 2 };
  int inumschanged[kSize] = { 1, 8, 3, 8, 1, 4, 7, 8, 9, 8 };
  FindAndReplace(inums, kSize, 2, 8);
  bool correct = true;
  for ( int i = 0; i < kSize && correct; ++i )
    correct = inums[i] == inumschanged[i];
  if ( correct ) 
    cout << "Passed int find and replace check" << endl;
  else
    cout << "Failed int find and replace check" << endl;

  string sarray[kSize] = {"hey", "how", "are", "you", "doing", "today", "you",
                          "are", "doing", "great"};
  string sarraychanged[kSize] = {"hey", "how", "are", "all the people", "doing", 
                          "today", "all the people", "are", "doing", "great"};
  FindAndReplace(sarray, kSize, string("you"), string("all the people"));
  correct = true;
  for ( int i = 0; i < kSize && correct; ++i )
    correct = sarray[i] == sarraychanged[i];
  if ( correct ) 
    cout << "Passed string find and replace check" << endl;
  else
    cout << "Failed string find and replace check" << endl;

  char carray[kSize] = "aaarrrrgh";
  char carraychanged[kSize] = "aaaaaargh";
  FindAndReplace(carray, 6, 'r', 'a');
  correct = true;
  for ( int i = 0; i < kSize && correct; ++i )
    correct = carray[i] == carraychanged[i];
  if ( correct ) 
    cout << "Passed char find and replace check" << endl;
  else
    cout << "Failed char find and replace check" << endl;

  return 0;
}
