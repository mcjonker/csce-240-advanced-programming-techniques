// Copyright 2022 CSCE240 bhipp
// initial tests for functionality of the TaxId class
#include "taxid.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  if ( TaxId::GetMask() == "XXXXX####" )
    cout << "Passed mask initialization / mask accessor test" << endl;
  else
    cout << "Failed mask initialization / mask accessor test" << endl;

  TaxId::SetMask("XXXXXXXXX");
  if ( TaxId::GetMask() == "XXXXXXXXX" )
    cout << "Passed mask mutator good / mask accessor test 1" << endl;
  else
    cout << "Failed mask mutator good / mask accessor test 1" << endl;

  TaxId::SetMask("X#X#X#X#X");
  if ( TaxId::GetMask() == "X#X#X#X#X" )
    cout << "Passed mask mutator good / mask accessor test 2" << endl;
  else
    cout << "Failed mask mutator good / mask accessor test 2" << endl;

  TaxId::SetMask("XXXXXXXXXX");
  if ( TaxId::GetMask() == "X#X#X#X#X" )
    cout << "Passed mask mutator bad / mask accessor test 1" << endl;
  else
    cout << "Failed mask mutator bad / mask accessor test 2" << endl;

  TaxId::SetMask("########");
  if ( TaxId::GetMask() == "X#X#X#X#X" )
    cout << "Passed mask mutator bad / mask accessor test 2" << endl;
  else
    cout << "Failed mask mutator bad / mask accessor test 2" << endl;

  TaxId::SetMask("*********");
  if ( TaxId::GetMask() == "X#X#X#X#X" )
    cout << "Passed mask mutator bad / mask accessor test 3" << endl;
  else
    cout << "Failed mask mutator bad / mask accessor test 3" << endl;

  TaxId::SetMask("#########");
  if ( TaxId::GetMask() == "#########" )
    cout << "Passed mask mutator good / mask accessor test 3" << endl;
  else
    cout << "Failed mask mutator good / mask accessor test 3" << endl;

  const TaxId t;
  if ( t.GetId() == "000000000" )
    cout << "Passed default constructor / GetId test\n";
  else
    cout << "Failed default constructor / GetId test\n";

  TaxId t2("123456789");
  if ( t2.GetId() == "123456789" )
    cout << "Passed constructor / GetId test good\n";
  else
    cout << "Failed constructor / GetId test good\n";

  TaxId t3("0123456789");
  if ( t3.GetId() == "000000000" )
    cout << "Passed constructor / GetId test bad\n";
  else
    cout << "Failed constructor / GetId test bad\n";

  t3.SetId("123456789");
  if ( t3.GetId() == "123456789" )
    cout << "Passed SetId / GetId test good\n";
  else
    cout << "Failed SetId / GetId test good\n";

  t3.SetId("a11111111");
  if ( t3.GetId() == "123456789" )
    cout << "Passed SetId / GetId test bad 1\n";
  else
    cout << "Failed SetId / GetId test bad 1\n";

  t3.SetId("1111111111");
  if ( t3.GetId() == "123456789" )
    cout << "Passed SetId / GetId test bad 2\n";
  else
    cout << "Failed SetId / GetId test bad 2\n";

  t3.SetId("111-22-3333");
  if ( t3.GetId() == "111223333" )
    cout << "Passed SetId dashes / GetId test 1\n";
  else
    cout << "Failed SetId dashes / GetId test 1\n";

  t3.SetId("11-222-3333");
  if ( t3.GetId() == "111223333" )
    cout << "Passed SetId dashes / GetId test bad 1\n";
  else
    cout << "Failed SetId dashes / GetId test bad 1\n";

  t3.SetId("111-ab-1111");
  if ( t3.GetId() == "111223333" )
    cout << "Passed SetId dashes / GetId test bad 2\n";
  else
    cout << "Failed SetId dashes / GetId test bad 2\n";

  t3.SetId("111x11x1111");
  if ( t3.GetId() == "111223333" )
    cout << "Passed SetId dashes / GetId test bad 3\n";
  else
    cout << "Failed SetId dashes / GetId test bad 3\n";

  t3.SetId("987654321");
  TaxId::SetMask("X#X#X#X#X");
  if ( t3.GetId() == "X8X6X4X2X" )
    cout << "Passed SetMask / GetId test 1\n";
  else
    cout << "Failed SetMask / GetId test 1\n";

  TaxId::SetMask("#XXXXX#X#");
  if ( t3.GetId() == "9XXXXX3X1" )
    cout << "Passed SetMask / GetId test 2\n";
  else
    cout << "Failed SetMask / GetId test 2\n";

  if ( t2.GetId() == "1XXXXX7X9" )
    cout << "Passed constructor / GetId test good\n";
  else
    cout << "Failed constructor / GetId test good\n";
  return 0;
}

