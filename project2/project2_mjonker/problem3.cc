// Copyright 2022 CSCE240
// Prototypes written by Mitchell Jonker
// Exam 2 - problem 3 - function prototypes
#include "bookproblem3.h"
#include "problem3.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
int WhichChapter(const Book * bptr, string ch) {
  int const number = bptr->GetNumChapters();
  const string * chapters = bptr->GetChapters();
  if (number > 0) {
    for (int i = 0; i < number; i++) {
      if (chapters[i] == ch) {
        return i+1;
      }
    }
  }
  return -1;
}
void RemoveChapter(Book * bptr, string ch) {
  int const number = bptr->GetNumChapters();
  const string * chapters = bptr->GetChapters();
  int remove_chapter;  // chapter to be removed
  // Find Chapter #
  if (number > 0) {
    for (int i = 0; i < number; i++) {
      if (chapters[i] == ch) {
        remove_chapter = i+1;
        break;
      }
    }
  }
  int kSizeVar = number-1;
  string chapters_kept[kSizeVar];
  bool removed = false;
  // remove chapter from book.
  int l = 0;
  for (int j = 0; j < number-1; j++) {
    if (j == remove_chapter-1 && !removed) {
      removed = true;
      j++;
    }
    chapters_kept[l] = chapters[j];
    l++;
  }
  bptr->SetChapters(chapters_kept, number-1);
}
