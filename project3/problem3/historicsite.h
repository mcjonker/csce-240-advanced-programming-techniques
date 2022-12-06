// Copyright 2022 Mitchell Jonker
// Final Exam Problem 3

#ifndef PROJECT3_PROBLEM3_HISTORICSITE_H_
#define PROJECT3_PROBLEM3_HISTORICSITE_H_
#include <string>
#include "geographiclocation.h"
using std::string;
namespace csce240_sites {
class HistoricSite : public GeographicLocation {
  public:
    // Explicit Constructor
    explicit HistoricSite(string desc = "", int year = 0,
                          double latitude = 0, double longitude = 0);
    // Destructor
    virtual ~HistoricSite() {}
    // Mutators
    void SetDescription(string desc) { desc_ = desc; }
    void SetYearEstablished(int year) { year_ = year; }
    // Accessors
    string GetDescription() const { return desc_; }
    int GetYearEstablished() const { return year_; }
    // Print Function
    virtual void Print() const;
  private:
    // Data members
    string desc_;
    int year_;
};
}  // namespace csce240_sites
#endif  // PROJECT3_PROBLEM3_HISTORICSITE_H_

// Derive the HistoricSites class from the GeographicLocation class in this
// file. Place it in the namespace csce240_sites

// The HistoricSites class should have two private data members:
// a string for the description of the site and an int for the year the
// site was established.

// Member functions:
// - An explicit constructor that takes a string for the description, with a
//   default argument of "", an int for the year established with a default
//   argument of 0, a double for the latitude with a default argument of 0,
//   and a double for the longitude with a default argument of 0.

// - A virtual destructor - the body of the function should be empty {}

// - SetDescription that takes a string for the historic site's description.
//   Any string should be accepted.

// - SetYearEstablished that takes an int argument for the year the historic
//   site was established. Any int should be accepted.

// - GetDescription should return a copy of the value of the description
//   data member

// - GetYearEstablished should return a copy of the value of the year
//   established data member

// - A virtual Print function that displays the Historic Site as
//     Historic Site
//     Established: (the value of the year established data member)
//     Location: (the lat/long as printed in the GeographicLocation class)
//     Description: (the value of the description data member)
//   example expected output for the print function is provided in
//   /output/correcthsprint.txt
