// Copyright 2022 CSCE240
// Exam 2 testproblem1.cc
/*
#include "problem1.h"
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const int kArraySize = 7;
  
  int original_array[kArraySize] = {4, 4, 4, 4, 4, 4, 4};
  int expected_result[kArraySize] = {0, 0, 0, 0, 0, 0, 0};
  Remove(original_array, kArraySize, 4);

  int original_array[kArraySize] = {1, 4, 2, 1, 3, 6, 1};
  int expected_result[kArraySize] = {4, 2, 3, 6, 0, 0, 0};
  Remove(original_array, kArraySize, 1);
  
  bool match = true;
  int i = 0;
  while ( match && i < kArraySize ) {
    match = original_array[i] == expected_result[i];
    ++i;
  }
  if ( match )
    cout << "Passed first test" << endl;
  else
    cout << "Failed first test" << endl;
  return 0;
}
*/

 // Copyright 2022 CSCE240
 // Exam 2 testproblem1.cc
 #include "problem1.h"
 #include<iostream>
 using std::cout;
 using std::endl;

 int main() {
   const int kArraySize = 7;
   int original_array[kArraySize] = {1, 4, 2, 1, 3, 6, 1};
   int expected_result[kArraySize] = {4, 2, 3, 6, 0, 0, 0};
   Remove(original_array, kArraySize, 1);
   bool match = true;
   int i = 0;
   while ( match && i < kArraySize ) {
     match = original_array[i] == expected_result[i];
     ++i;
   }
   if ( match )
     cout << "Passed first test" << endl;
   else
     cout << "Failed first test" << endl;
   return 0;
 }


