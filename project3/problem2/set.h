// Copyright 2022 CSCE240 Exam/Project 3
// Set template class definition
// Class Member Function implemented by Mitchell Jonker
#ifndef _SET_H_
#define _SET_H_

#include<iostream>
using std::cout;
using std::endl;
using std::ostream;

namespace csce240_set {

template<class T>
class Set {
  friend ostream& operator << (ostream& out, const Set &toprint) {
    toprint.Print(out);
    return out;
  }

 public:
  // default constructor - will initialize the size and values of the set using
  //                       the arguments sent, defaulting to the empty set
  explicit Set(int s = 0, const T * v = nullptr);

  // copy constructor
  explicit Set(const Set& tocopy);
  // assignment operator
  Set& operator = (const Set& tocopy);
  // destructor
  ~Set();

  // SetValues function to update the size and values in the set
  // Pre-conditions: s >= 0 AND
  //                 v = nullptr OR a block of memory holding size Ts
  // Post-conditions: if s >= 0, size_ will be set to s
  //                  if s = 0, values_ will be set to nullptr
  //                  if s > 0, values_ will be set to a block of s Ts
  //                            with copies of the values v is pointing to,
  //                            unless v = nullptr.
  void SetValues(int s, const T * v);

  // Print will output the set's values to out using list notation/enumeration
  void Print(ostream& out = cout) const;

  // IsElementOf returns true if the argument is in the set, and false if the
  // argument is not in the set
  bool IsElementOf(T value) const;

  int GetSize() const { return size_; }

  // If the argument is not already a member of the set,
  //    AddElement will increase the size of the set by 1, and add value of
  //    the argument as a member of the set
  // If the argument is already a member of the set,
  //    AddElement will leave the set unchanged
  void AddElement(const T& v);

  // overloaded operator == returns true if the two sets are the same size and
  // contain the same elements, returns false otherwise
  bool operator == (const Set& right) const;

 private:
  int size_;
  T * values_;
};  // end class definition

}  // end namespace csce240_set

#endif  // _SET_H_
