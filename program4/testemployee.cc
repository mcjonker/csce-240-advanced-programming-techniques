// Copyright 2022 CSCE240 bhipp
// initial tests for functionality of the TaxId class
#include "employee.h"
#include "taxid.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const Employee e;
  if ( e.GetHoursPerWeek() == 40 && e.GetPayType() == "hourly"
       && e.GetTaxId() == "XXXXX9999" )
    cout << "Passed default constructor / accessor function test" << endl;
  else
    cout << "Failed default constructor / accessor function test" << endl;

  TaxId::SetMask("#########");
  if ( e.GetTaxId() == "XXXXX9999" )
    cout << "Passed GetTaxId masking test" << endl;
  else
    cout << "Failed GetTaxId masking test" << endl;

  Employee e2("123456789",1,37.5);
  if ( e2.GetHoursPerWeek() == 37.5 && e2.GetPayType() == "salaried"
       && e2.GetTaxId() == "XXXXX6789" )
    cout << "Passed initialize constructor / accessor function test" << 
endl;
  else
    cout << "Failed initialize constructor / accessor function test" << 
endl;

  e2.SetHoursPerWeek(30.25);
  if ( e2.GetHoursPerWeek() == 30.25)
    cout << "Passed hours per week mutator / accessor test 1" << endl;
  else
    cout << "Failed hours per week mutator / accessor test 1" << endl;

  e2.SetHoursPerWeek(-1);
  if ( e2.GetHoursPerWeek() == 30.25 )
    cout << "Passed hours per week mutator / accessor test 2" << endl;
  else
    cout << "Failed hours per week mutator / accessor test 2" << endl;
 
  e2.SetHoursPerWeek(80);
  if ( e2.GetHoursPerWeek() == 30.25 )
    cout << "Passed hours per week mutator / accessor test 2" << endl;
  else
    cout << "Failed hours per week mutator / accessor test 2" << endl;

  e2.SetPayType(3);
  if ( e2.GetPayType() == "contract" )
    cout << "Passed pay type mutator / accessor test 1" << endl;
  else
    cout << "Failed pay type mutator / accessor test 1" << endl;

  e2.SetPayType(2);
  if ( e2.GetPayType() == "hourly" )
    cout << "Passed pay type mutator / accessor test 2" << endl;
  else
    cout << "Failed pay type mutator / accessor test 2" << endl;

  e2.SetPayType(5);
  if ( e2.GetPayType() == "hourly" )
    cout << "Passed pay type mutator / accessor test 3" << endl;
  else
    cout << "Failed pay type mutator / accessor test 3" << endl;

  e2.SetPayType("contract");
  if ( e2.GetPayType() == "contract" )
    cout << "Passed pay type mutator / accessor test 4" << endl;
  else
    cout << "Failed pay type mutator / accessor test 4" << endl;

  e2.SetPayType("salaried");
  if ( e2.GetPayType() == "salaried" )
    cout << "Passed pay type mutator / accessor test 5" << endl;
  else
    cout << "Failed pay type mutator / accessor test 5" << endl;

  e2.SetPayType("volunteer");
  if ( e2.GetPayType() == "salaried" )
    cout << "Passed pay type mutator / accessor test 6" << endl;
  else
    cout << "Failed pay type mutator / accessor test 6" << endl;

  e2.SetTaxId("987654321");
  if ( e2.GetTaxId() == "XXXXX4321" )
    cout << "Passed tax id mutator / accessor test" << endl;
  else
    cout << "Failed tax id mutator / accessor test" << endl;

  return 0;
}
