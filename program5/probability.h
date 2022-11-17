// Copyright 2022 Mitchell Jonker
// Header implementation by Mitchell Jonker
#ifndef PROGRAM5_PROBABILITY_H_
#define PROGRAM5_PROBABILITY_H_
#include <string>
#include "fraction.h"
using std::string;
namespace csce240_program5 {
// Define the Probability class as a child of the Fraction class
// Probabilities are always between 0 and 1, inclusive
// Invalid operations should leave the object unchanged.
class Probability : public Fraction {
  public:
    explicit Probability(int numer = 0, int denom = 1);
    explicit Probability(Fraction z);
    // Redefine inheritied funtions if needed
    bool operator ==(Probability b) const;
    //Fraction operator *(Fraction b) const;
    string OddsInFavor();
    void Multiply(int mult);
    void Divide(int dividend);
    //void SetNumerator(int numer);
    //void SetDenominator(int denom);
  
  private:
    int numer_;
    int denom_;
  
};
}  // end namespace csce240_program5
// create a constructor should take two integers and create a probability,
// defaulting the numerator to 0 and the denominator to 1 if they are not
// sent as arguments - invalid initialization should result in the
// probability being 0

// create a constructor that takes a Fraction and creates a probability
// if the fraction is not a valid probability, the probability should
// be set to 0

// Redefine any of the inherited functions that need to be modified
// in order to work properly for a Probability.

// OddsInFavor function should return a string for the odds that correspond
// to the probability. For example, the probability 2/5 is equivalent to
// the odds in favor of 2:3
#endif  // PROGRAM5_PROBABILITY_H_
