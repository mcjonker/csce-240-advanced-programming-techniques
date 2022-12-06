// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<geographiclocation.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  GeographicLocation null_island;
  null_island.SetLongitude(-197);
  if ( null_island.GetLongitude() == 0  )
    cout << "Passed set bad longitude test" << endl;
  else
    cout << "Failed set bad longitude test. Longitude = "
         << null_island.GetLongitude() << ", expected 0" << endl;

  null_island.SetLongitude(123.5);
  if ( null_island.GetLongitude() == 123.5  )
    cout << "Passed set good longitude test" << endl;
  else
    cout << "Failed set good longitude test. Longitude = "
         << null_island.GetLongitude() << ", expected 123.5" << endl;

  return 0;
}
