// Copyright 2022 CSCE240
// problem2.cc to test the Volume class
#include "volume.h"
#include<iostream>
using std::cout;
using std::endl;

int main() {
  Volume v_object1;
  if ( v_object1.GetQuantity() == 0 && v_object1.GetMeasure() == "ounces" )
    cout << "Passed default constructor and accessor tests" << endl;
  else
    cout << "Failed default constructor and accessor tests" << endl;

  Volume v_object2(6, "tablespoons");
  if ( v_object2.GetQuantity() == 6 && v_object2.GetMeasure() == "tablespoons" )
    cout << "Passed good constructor initialization and accessor tests" << endl;
  else
    cout << "Failed good constructor initialization and accessor tests" << endl;

  v_object2.Convert("teaspoons");
  if ( v_object2.GetQuantity() == 18 && v_object2.GetMeasure() == "teaspoons" )
    cout << "Passed good Convert test 1" << endl;
  else
    cout << "Failed good Convert test 1" << endl;

  v_object2.Convert("cups");
  if ( v_object2.GetQuantity() == 0.375 && v_object2.GetMeasure() == "cups" )
    cout << "Passed good Convert test 2" << endl;
  else
    cout << "Failed good Convert test 2" << endl;

  Volume v_object3;
  v_object3.SetQuantity(5);
  v_object3.SetMeasure("feet");
  if ( v_object3.GetQuantity() == 5 && v_object3.GetMeasure() == "ounces" )
    cout << "Passed mutator test 1" << endl;
  else
    cout << "Failed mutator test 1" << endl;

  const Volume v_object4(0.5, "cups");
  v_object3.Add(v_object4);
  if ( v_object3.GetQuantity() == 9 && v_object3.GetMeasure() == "ounces" )
    cout << "Passed Add test 1" << endl;
  else
    cout << "Failed Add test 1" << endl;

  return 0;
}
