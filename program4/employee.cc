// Copyright 2022 Mitchell Jonker
#include "employee.h"
#include "taxid.h"
using std::string;
using std::cout;

TaxId EmployeeTax("999999999");

Employee::Employee(string EmployeeI9Id, int employment_type, double hours) {
  // Init Employment Type
  if (employment_type > 0 && employment_type < 4) {
    SetPayType(employment_type);
  } else {
    SetPayType(2);
  }
  // Init Hours Per Week
  if (hours >= 0.0 || hours <= 40.0) {
    SetHoursPerWeek(hours);
  } else {
    SetHoursPerWeek(40.0);
  }
  // Init TaxId
  SetTaxId(EmployeeI9Id);
  // Init Employee Tax Data
  TaxId EmployeeTax("999999999");
  EmployeeTax_ = EmployeeTax;
}
void Employee::SetPayType(int employment_type) {
  if (employment_type > 0 && employment_type < 4) {
    employment_type_ = employment_type;
  }
}
void Employee::SetPayType(string employment_title) {
  if (employment_title == "salaried") {
    employment_type_ = 1;
  }
  if (employment_title == "hourly") {
    employment_type_ = 2;
  }
  if (employment_title == "contract") {
    employment_type_ = 3;
  }
}
string Employee::GetPayType() const {
  if (employment_type_ == 1) {
    return "salaried";
  }
  if (employment_type_ == 2) {
    return "hourly";
  } else {  // if (employment_type_ == 3)
    return "contract";
  }
}
void Employee::SetHoursPerWeek(double hours) {
  if (hours >= 0.0 || hours <= 40.0) {
    hours_ = hours;
  }
}
double Employee::GetHoursPerWeek() const {
  return hours_;
}
void Employee::SetTaxId(string EmployeeI9Id) {
  EmployeeTax_.SetId(EmployeeI9Id);
}
string Employee::GetTaxId() const {
  return EmployeeTax_.GetId();
}
