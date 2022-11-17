// Copyright 2022 Mitchell Jonker
// Class implementation by Mitchell Jonker
// implement Probability class functionality here
#include "probability.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::to_string;
namespace csce240_program5  {
Probability::Probability(int numer, int denom) {
  // Constructor from two integers.
  if (numer >= 0) {
    SetNumerator(numer);
  } else {
    SetNumerator(0);
  }
  if (denom > 0) {
    SetDenominator(denom);
  } else {
    SetDenominator(1);
  }
  if (numer/denom > 1 || numer/denom < 0) {
    SetNumerator(0);
    SetDenominator(1);
  }
}
Probability::Probability(Fraction z) {
  // Constructor from Fraction
  int numer = z.GetNumerator();
  int denom = z.GetDenominator();
  if (numer >= 0) {
    SetNumerator(numer);
  } else {
    SetNumerator(0);
  }
  if (denom > 0) {
    SetDenominator(denom);
  } else {
    SetDenominator(1);
  }
  if (numer/denom > 1 || numer/denom < 0) {
    SetNumerator(0);
    SetDenominator(1);
  }
}
bool Probability::operator ==(Probability b) const {
  if ((GetNumerator() * b.GetDenominator())
      == (GetDenominator() * b.GetNumerator())) {
    return true;
  }
  return false;
}
void Probability::Multiply(int mult) {
  double product = mult*GetNumerator();
  double prob = product/GetDenominator();
  if (prob <= 1 && prob >= 0) {
    SetNumerator(product);
  } else {
    SetNumerator(GetNumerator());
  }
}
string Probability::OddsInFavor() const {
  int n = numer_;
  int d = denom_;
  string n_string = to_string(GetNumerator());
  string d_string = to_string(GetDenominator()-GetNumerator());
  string n_s = to_string(n);  // Save by reference
  string d_s = to_string(d-n);  // Save by reference
  return n_string+":"+d_string;
}
void Probability::Divide(int dividend) {
  if (dividend > 0) {
    double product = dividend*GetDenominator();
    SetDenominator(product);
  }
}
}  // end namespace csce240_program5
