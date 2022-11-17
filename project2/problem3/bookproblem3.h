// Copyright 2022 CSCE240
#ifndef _BOOK_H_
#define _BOOK_H_

#include<string>
using std::string;

class Book {
 public:
  explicit Book(string title);

  // copy constructor
  Book(const Book & to_copy);

  // overloaded assignment operator
  Book& operator = (const Book &);

  // destructor
  ~Book();

  // SetTitle will set the title of the book to title, beginning with an
  // uppercase character
  void SetTitle(string title);

  string GetTitle() const { return title_; }

  int GetNumChapters() const { return num_chapters_; }

  // preconditions: the function will be sent an array of strings holding the
  //                names of the chapters, and the number of chapter names in
  //                that array
  // postcondition: if num is negative, the function will exit with no change
  //                if num == num_chapters, then the chapter names will be
  //                updated to the strings in the chapter_name array
  //                if num != num_chapters_, the previously used space for the
  //                chapter names will be released, new space will be
  //                allocated for the names, and the values will be copied over
  void SetChapters(string chapter_name[], int num);

  const string * GetChapters() const { return chapters_; }

 private:
  string title_;
  int num_chapters_;
  string * chapters_;
};

#endif  // _BOOK_H_
