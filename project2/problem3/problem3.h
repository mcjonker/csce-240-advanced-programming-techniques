// Copyright 2022 CSCE240
// Exam 2 - problem 3 - function prototypes
#ifndef _PROBLEM3_H_
#define _PROBLEM3_H_
#include "bookproblem3.h"
#include<string>
using std::string;

// preconditions: The function takes a pointer to a Book and a string as
//                arguments
// postconditions: The Book the pointer is pointing to will remain unchanged
//                 If the string argument matches one of the strings for the
//                 Book's chapters, the function will return the numeric
//                 chapter of the book with that name (an integer between 1
//                 and num_chapters_). (note: if multiple chapters match the
//                 string the function returns the first chapter in the book
//                 that matches)
//                 If no chapter in the book matches the string, the function
//                 will return -1.
int WhichChapter(const Book * bptr, string ch);

// preconditions: The function takes a pointer to a Book and a string as
//                arguments
// postconditions: If the string is one of the chapters in the Book the
//                 pointer is pointing to, that chapter will be removed from
//                 the Book. (note: if multiple chapters match the string
//                 the function only removes the first chapter that matches)
//                 If the string does not match any of the chapters, the Book
//                 will remain unchanged.
void RemoveChapter(Book * bptr, string ch);

#endif  // _PROBLEM3_H_
