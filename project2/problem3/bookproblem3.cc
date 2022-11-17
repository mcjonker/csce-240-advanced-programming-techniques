// Copyright 2022 CSCE240
// implement functionality of Book class
#include "bookproblem3.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

Book::Book(string title) {
  SetTitle(title);
  num_chapters_ = 0;
  chapters_ = nullptr;
}

// copy constructor
Book::Book(const Book & to_copy ) {
  title_ = to_copy.title_;
  num_chapters_ = 0;
  // call the set function to make a copy of to_copy's chapters
  // and to set num_chapters_
  SetChapters(to_copy.chapters_, to_copy.num_chapters_);
}

// overloaded assigment operator
Book& Book::operator = (const Book & to_copy) {
  title_ = to_copy.title_;
  SetChapters(to_copy.chapters_, to_copy.num_chapters_);
  return *this;
}

// destructor frees up dynamically allocated memory
Book::~Book() {
  delete [] chapters_;
}

// make the first character in the title an uppercase character
void Book::SetTitle(string title) {
  title[0] = toupper(title[0]);
  title_ = title;
}

void Book::SetChapters(string chapter_name[], int num) {
  if ( num < 0 )  // this should never be true based on the function
    return;       // preconditions... but check just in case
  if ( num != num_chapters_ ) {
    // free up the old space
    if ( num_chapters_ > 0 )
      delete [] chapters_;

    // allocate new space
    if ( num > 0 )
      chapters_ = new string[num];

    if ( chapters_ == NULL ) {
       cout << "Requested memory could not be allocated" << endl;
       exit(1);  // terminate the program if the memory could not be allocated
    }
  }
  num_chapters_ = num;
  if ( num_chapters_ == 0 )
    chapters_ = nullptr;
  // copy the chapter names over
  for ( int i = 0; i < num_chapters_; ++i )
    chapters_[i] = chapter_name[i];
}
