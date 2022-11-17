// Copyright 2022 CSCE240
// Exam 2 - problem 3 - function prototypes
#include "bookproblem3.h"
#include "problem3.h"
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Book a_book("All About A Animals");

  string some_strings[10] = {"Aardvarks", "Alligators", "Ants"};
  a_book.SetChapters(some_strings, 3);

  if ( WhichChapter(&a_book, "Ants") == 3 )
    cout << "Passed find ants test" << endl;
  else
    cout << "Failed find ants test" << endl;
  
  RemoveChapter(&a_book, "Alligators");
  if ( a_book.GetNumChapters() == 2 ) {
    if ( a_book.GetChapters()[0] == "Aardvarks" &&
         a_book.GetChapters()[1] == "Ants" ) {
      cout << "Passed alligator removal test" << endl;
    } else {
      cout << "Failed alligator removal - titles don't match expected" << endl;
    }
  } else {
    cout << "Failed alligator removal test - number of chapters isn't 2"
         << endl;
  }
  return 0;
}
