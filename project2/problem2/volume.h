// Copyright 2022 CSCE240
// Class code by Mitchell Jonker
// Exam 2 problem 2 define the Volume class
#ifndef _VOLUME_H_
#define _VOLUME_H_
#include <string>
#include <iostream>
using std::string;
using std::cout;
class Volume {
  public:
    explicit Volume(double quantity = 0, string unit_type = "ounces");
    double GetQuantity() const;
    void SetQuantity(double quantity);
    string GetMeasure() const;
    void SetMeasure(string unit_type);
    // ounces, tablespoons, teaspoons, cups
    void Convert(string unit_type);
    // 1 cup = 8 ounces = 16 tablespoons = 48 teaspoons
    void Add(Volume vol_object);
  private:
    double quantity_;
    string unit_type_;
};
#endif  // _VOLUME_H_
// Write an explicit constructor that allows Volume objects to be instantiated
// with or without an initial quantity and unit of measure. The quantity should
// default to 0 if it's not initialized and the unit of measure should default
// to ounces if it's not initialized.
// Write a GetQuantity function to access a copy of the Volume quantity
// Write a GetMeasure function to access a copy of the Volume measure
// Write a SetQuantity function that will set the Volume quantity to any
// non-negative double
// Write a SetMeasure function that takes a string argument
// preconditions: The string argument should hold either "ounces" "tablespoons"
//                "teaspoons" or "cups"
// postconditions: If the string argument is one of the four expected measures
//                 the function will set the measure data member to the valid
//                 string.
//                 If the string argument is not one of the four expected
//                 measures, the measure data member will remain unchanged.
// Write a public Convert member function that takes a string as an argument
// preconditions: The string argument should hold either "ounces" "tablespoons"
//                "teaspoons" or "cups"
// postconditions: If the string argument is one of the four expected measures
//                 the function will update the quantity and the measure to
//                 the equivalent volume expressed in the new measure. For
//                 reference: 1 cup = 8 ounces = 16 tablespoons = 48 teaspoons.
//                 If the string argument is not one of the four expected
//                 measures, the object should remain unchanged.
// Write a public Add member function that takes a Volume object as its argument
// preconditions: The argument is a valid Volume object
// postconditions: The function will update the quantity of the object the
//                 function is called on to be the sum of the two Volumes,
//                 leaving the measure unchanged.
//                 For example: Volume v1(5, "ounces"), v2(1, "cup");
//                              v1.Add(v2);  // v1 will be changed to 13 ounces.
