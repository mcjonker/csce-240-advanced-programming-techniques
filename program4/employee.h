// Copyright 2022 Mitchell Jonker
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>
#include <iostream>
#include "taxid.h"
using std::string;
using std::cout;

// Create a default constructor that creates an Employee object with defaults
// of 40 hours per week, hourly, and a TaxId of "999999999"

class Employee {
  // List members of the class
  public:
    explicit Employee(string EmployeeI9Id = "999999999",
                      int employment_type_ = 2, double hours_ = 40);
    void SetPayType(int employment_type);
    void SetPayType(string employment_title);
    string GetPayType() const;
    void SetHoursPerWeek(double hours);
    double GetHoursPerWeek() const;
    void SetTaxId(string TaxId);
    string GetTaxId() const;
  private:
    string EmployeeI9Id;
    double hours_;
    int employment_type_;
    TaxId EmployeeTax_;
};
// Create a constructor that allows an Employee object to be created with
// specified initial values
// preconditions: The constructor will be sent a string for the tax id,
//                an integer for the pay type, and a double for the hours
//                per week
// postconditions: The private data members will be initialized with the values
//                 sent if they are valid.
//                 If the pay type argument is not 1, 2, or 3, the pay type
//                 data member will be set to 2.
//                 If the hours per week argument is not between 0 and 40,
//                 inclusive, then the hours per week data member will be
//                 set to 40.
// SetPayType mutator function
// preconditions: The function will be sent an integer which should be
//                1, 2, or 3
// postconditions: The private data member will be changed if the argument is
//                 valid. If the argument is invalid, the private data member
//                 will not be changed.
// SetPayType mutator function 2
// preconditions: The function will be sent a string that should be either
//                "salaried" "hourly" or "contract"
// postconditions: If the argument is "salaried" the private data member will
//                 be set to 1.
//                 If the argument is "hourly" the private data member will
//                 be set to 2.
//                 If the argument is "contract" the private data member will
//                 be set to 3.
//                 If the argument is none of the above, the private data
//                 member will remain unchanged.
// GetPayType accessor function will return the string "hourly" "salaried"
//                 or "contract" that corresponds to the private data member
// SetHoursPerWeek mutator function
// precondition: The function will be sent a double that should be between
//               0 and 40, inclusive
// postcondition: The function will update the data member to the value of the
//                argument if the argument is valid. Otherwise the data member
//                will remain unchanged.
// GetHoursPerWeek accessor function will return the employee's hours per week
// SetTaxId mutator function - this function should take a string argument
//                 and send it to the set function written for the TaxId class
// GetTaxId accessor function - returns the tax id with all but the last
// four digits masked.

#endif  // PROGRAM4_EMPLOYEE_H_
