// Copyright 2022 Mitchell Jonker
// Header implementation by Mitchell Jonker
#ifndef  PROGRAM5_FRACTION_H_
#define PROGRAM5_FRACTION_H_
#include <string>
using std::string;
namespace csce240_program5 {
// define the fraction class where a valid fraction is an integer
// divided by a non-zero integer
class Fraction {
 public:
  explicit Fraction(int numer = 0, int denom = 1);
  bool operator ==(Fraction b) const;
  double ToDecimal() const;
  void Multiply(int mult);
  Fraction operator *(Fraction b) const;
  void Divide(int dividend);
  string ToString() const;
  void SetNumerator(int numer);
  void SetDenominator(int denom);
  int GetNumerator() const;
  int GetDenominator() const;
 private:
  int numer_;
  int denom_;
};
}  // end namespace csce240_program5
// constructor should set the numerator and denominator - defaulting the
// numerator to 0 and the denominator to 1 if they are not sent as arguments
// overload the == operator. This should return if the value of the two
// compared fractions are equal, and false otherwise. For example,
// 3/6 == 4/8 is TRUE.
// note: do not use real division to compare decimal values as rounding
//       errors can give incorrect results
// ToDecimal should return the decimal equivalent of the fraction.
// For example, if the fraction is 1/2, ToDecimal should return 0.5
// Multiply should take an integer argument and multiply the fraction
// by that integer
// overload the * operator to multiply two fractions and return the resulting
// Fraction object.
// Divide should take an integer argument and update the object so that
// it has been divided by that quantity
// ToString should return the fraction in the format "numerator/denominator"
// add accessor and mutator functions
// add the two integer data members here
#endif  // PROGRAM5_FRACTION_H_
