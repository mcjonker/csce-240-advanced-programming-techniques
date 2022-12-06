// Copyright 2022 csce240 Exam / Project 3
// Set class function implementations
// Class Member Function implemented by Mitchell Jonker
#include<set.h>
#include<iostream>
using std::cout;
using std::endl;
using std::ostream;

namespace csce240_set {

template<class T>
Set<T>::Set(int size, const T * values) {
  size_ = 0;
  values_ = nullptr;
  SetValues(size, values);
}

template<class T>
Set<T>::Set(const Set& tocopy) {
  size_ = 0;
  values_ = nullptr;
  SetValues(tocopy.size_, tocopy.values_);
}

template<class T>
Set<T>& Set<T>::operator = (const Set& tocopy) {
  SetValues(tocopy.size_, tocopy.values_);
  return *this;
}

// destructor
template<class T>
Set<T>::~Set() {
  delete [] values_;
}

template<class T>
void Set<T>::SetValues(int size, const T * newvalues) {
  if ( size < 0 )
    return;
  if ( size != size_ ) {
    if ( size_ != 0 )
      delete [] values_;  // free up the prior allocated memory
    if ( size == 0 )      // if they're asking for an empty set
      values_ = nullptr;  // set the values_ to the nullptr
    else
      values_ = new T[size];  // otherwise allocate the requested space
  }
  size_ = size;
  if ( newvalues != nullptr ) {  // if newvalues holds a memory location
    // copy over the values from the argument into the data member
    for ( int i = 0; i < size_; ++i )
      values_[i] = newvalues[i];
  }
}

template<class T>
void Set<T>::Print(ostream& out) const {
  out << "{";
  for ( int i = 0; i < size_; ++i )
    out << values_[i] << (i < size_ - 1 ? ", " : "");
  out << "}";
}

template<class T>
bool Set<T>::IsElementOf(T value) const {
  for ( int i = 0; i < size_; ++i )
    if ( values_[i] == value )  // values_[i]   *(values_ + i)
      return true;
  return false;
}

template<class T>
void Set<T>::AddElement(const T& v) {
  int kSize = GetSize()+1;
  int val = v;
  if (!IsElementOf(v)) {
    T newvalues[kSize];
    for (int i = 0; i < kSize-1; ++i) {
      newvalues[i] = values_[i];
    }
    newvalues[kSize-1] = val;
    SetValues(kSize, newvalues);
  }
}

template<class T>
bool Set<T>::operator == (const Set& right) const {
  bool answer = size_ == right.size_;
  for ( int i = 0; i < size_ && answer; ++i )
    answer = IsElementOf(right.values_[i]);
  return answer;
}

}  // end namespace csce240_set
