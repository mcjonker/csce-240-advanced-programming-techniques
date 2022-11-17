// Copyright 2022 Mitchell Jonker
// Class implementation by Mitchell Jonker
// implement Fraction class functionality here
#include "fraction.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::to_string;
namespace csce240_program5 {
  Fraction::Fraction(int numer, int denom) {
    // Constructor
    if (denom != 0) {
      SetNumerator(numer);
      SetDenominator(denom);
    } else {
      SetNumerator(0);
      SetDenominator(1);
    }
  }
  // Overload == Operator
  bool Fraction::operator ==(Fraction b) const {
    if ((numer_ * b.GetDenominator()) == (denom_ * b.GetNumerator())) {
      return true;
    }
    return false;
  }
  // To Decimal
  double Fraction::ToDecimal() const {
    double n = GetNumerator();
    double d = GetDenominator();
    return n/d;
  }
  // Multiply
  void Fraction::Multiply(int mult) {
    int product = mult*numer_;
    SetNumerator(product);
  }
  // Overload * Operator
  Fraction Fraction::operator *(Fraction b) const {
    int numer = numer_ * b.GetNumerator();
    int denom = denom_ * b.GetDenominator();
    Fraction f;
    f.SetNumerator(numer);
    f.SetDenominator(denom);
    return f;
  }
  // Divide
  void Fraction::Divide(int dividend) {
    int product = dividend*denom_;
    SetDenominator(product);
  }
  // ToString
  string Fraction::ToString() const {
    string n_string = to_string(numer_);
    string d_string = to_string(denom_);
    return n_string+"/"+d_string;
  }
  // Mutators
  void Fraction::SetNumerator(int numer) {
    numer_ = numer;
  }
  void Fraction::SetDenominator(int denom) {
    if (denom != 0) {
      denom_ = denom;
    }
  }
  // Accessors
  int Fraction::GetNumerator() const {
    return numer_;
  }
  int Fraction::GetDenominator() const {
    return denom_;
  }
}  // end namespace csce240_program5
