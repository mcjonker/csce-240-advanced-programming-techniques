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
  if ((GetNumerator() * b.GetDenominator()) == (GetDenominator() * b.GetNumerator())) {
    return true;
  }
  //cout << GetNumerator() << "/" << GetDenominator() << endl;
  //cout << b.GetNumerator() << "/" << b.GetDenominator() << endl;
  //cout << (GetNumerator() * b.GetDenominator()) << "|" << (GetDenominator() * b.GetNumerator()) << endl;
  return false;
}
/*
Probability operator *(Probability b) const {
  int numer = numer_ * b.GetNumerator();
  int denom = denom_ * b.GetDenominator();
  Probability f;
  f.SetNumerator(numer);
  f.SetDenominator(denom);
  return f;
}
*/
void Probability::Multiply(int mult) {
  //cout << "mult: " << mult << endl;
  //cout << "numer: " << GetNumerator() << endl;
  double product = mult*GetNumerator();
  //cout << "product: " << product << endl;
  //cout << "fract: " << product << "/" << GetDenominator() << endl;
  double prob = product/GetDenominator();
  //cout << "probability: " << prob << endl;
  if (prob <= 1 && prob >= 0) {
    //cout << "ifmet" << endl;
    SetNumerator(product);
  } else {
    //cout << "ifnot" << endl;
    SetNumerator(GetNumerator());
  }
  
}
string OddsInFavor() {
  
  
  return "";
}
void Probability::Divide(int dividend) {
  if (dividend > 0) {
    double product = dividend*GetDenominator();
    //cout << "Prod: " << product << endl;
    SetDenominator(product);
  }
}

}  // end namespace csce240_program5
