// Copyright 2022 CSCE240
// Function Implemented by Mitchell Jonker
// Exam 2 problem1.cc
#include "problem1.h"
#include <iostream>
using std::cout;
using std::endl;

// implement the Remove function here
void Remove(int an_array[], int array_size, int to_remove) {
  int i = 0;
  while (i < array_size) {
    // condition must be met to take action
    if (to_remove == an_array[i]) {
      int j = i;
      // To avoid overlapping avoidance, deincrement i if condition is met.
      i--;
      // Move value-to-be-removed to the end then replace it with zero.
      while (j < array_size-1) {
        int temp = an_array[j];
        an_array[j] = an_array[j+1];
        an_array[j+1] = temp;
        j++;
      }
      an_array[array_size-1] = 0;
    }
    i++;
  }
}
