// Copyright 2022 Mitchell Jonker
// Final Exam Problem 1
#ifndef PROJECT3_PROBLEM1_PROBLEM1_H_
#define PROJECT3_PROBLEM1_PROBLEM1_H_
template<class T> void FindAndReplace(T data[], int size, T find, T replace) {
  if (size > 0) {
    for (int i = 0; i < size; i++) {
      if (data[i] == find) {
        data[i] = replace;
      }
    }
  }
}
#endif  // PROJECT3_PROBLEM1_PROBLEM1_H_
