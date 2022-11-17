// Copyright 2022 CSCE240
// Exam 2 problem1.h
#ifndef _PROBLEM_1_H_
#define _PROBLEM_1_H_

// preconditions: function is sent an array of integers, the size of the array,
//                and an integer to remove all occurrences of in the array
// postconditions: The array will have all instances of to_remove removed from
//                 the array. Values remaining in the array will be shifted
//                 into the positions vacated by the removed values. Zeros will
//                 be added to the end of the array for any values that were
//                 shifted down.
void Remove(int an_array[], int array_size, int to_remove);

#endif  // _PROBLEM_1_H_
