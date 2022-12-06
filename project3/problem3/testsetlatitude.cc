// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<geographiclocation.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  GeographicLocation null_island;
  null_island.SetLatitude(97);
  if ( null_island.GetLatitude() == 0  )
    cout << "Passed set bad latitude test" << endl;
  else
    cout << "Failed set bad latitude test. Latitude = "
         << null_island.GetLatitude() << ", expected 0" << endl;

  null_island.SetLatitude(-84.2);
  if ( null_island.GetLatitude() == -84.2  )
    cout << "Passed set good latitude test" << endl;
  else
    cout << "Failed set good latitude test. Latitude = "
         << null_island.GetLatitude() << ", expected -84.2" << endl;

  return 0;
}
