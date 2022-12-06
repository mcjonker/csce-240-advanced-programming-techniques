// Copyright 2022 Mitchell Jonker
// Final Exam Problem 3
#ifndef PROJECT3_PROBLEM3_GEOGRAPHICLOCATION_H_
#define PROJECT3_PROBLEM3_GEOGRAPHICLOCATION_H_
#include <iostream>
using std::cout;
using std::endl;
namespace csce240_sites {
class GeographicLocation {
  public:
    // Constructor
    explicit GeographicLocation(double latitude = 0.0, double longitude = 0.0);
    // Destructor
    virtual ~GeographicLocation() {}
    // Mutators
    void SetLatitude(double latitude);
    void SetLongitude(double longitude);
    // Accessors
    double GetLatitude() const { return latitude_; }
    double GetLongitude() const { return longitude_; }
    // Print Function
    virtual void Print() const;
  private:
    // Data members
    double latitude_;
    double longitude_;
};
}  // namespace csce240_sites
#endif  // PROJECT3_PROBLEM3_GEOGRAPHICLOCATION_H_

// Define the GeographicLocation class in this file. Place it in the
// namespace csce240_sites

// The GeographicLocation class should have two private data members:
// a double for the latitude and a double for the longitude.

// Member functions:
// - An explicit constructor that takes two double parameters, the first for
//   the location's latitude, and the second for the location's longitude with
//   default arguments of 0 for each.

// - A virtual destructor - the body of the function should be empty {}

// - SetLatitude that takes a double argument for the location's latitude
//   if the argument is between -90 and 90 (inclusive), the latitude data
//   member should be updated with the argument's value
//   if the argument sent to the function is invalid, the location's latitude
//   should remain unchanged.

// - SetLongitude that takes a double argument for the location's longitude
//   if the argument is between -180 and 180 (inclusive), the longitude data
//   member should be updated with the argument's value
//   if the argument sent to the function is invalid, the location's longitude
//   should remain unchanged.

// - GetLatitude should return a copy of the value of the latitude data member

// - GetLongitude should return a copy of the value of the longitude data member

// - A virtual Print function that displays the location as
//     the absolute value of the latitude
//     the degree symbol (use the unicode \u00B0)
//     a space
//     N (if the latitude is non-negative) or S (if the latitude is negative)
//     a comma and a space
//     the absolute value of the longitude
//     the degree symbol (use the unicode \u00B0)
//     a space
//     E (if the longitude is non-negative) or W (if the longitude is negative)
//   example expected output for the print function is provided in
//   /output/correctglprint.txt
