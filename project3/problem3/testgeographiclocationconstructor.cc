// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<geographiclocation.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  GeographicLocation null_island;
  if ( null_island.GetLatitude() == 0  && null_island.GetLongitude() == 0 )
    cout << "Passed default constructor test\n" << endl;
  else
    cout << "Failed default constructor test. Latitude = "
         << null_island.GetLatitude() << ", expected 0\nLongitude = "
         << null_island.GetLongitude() << ", expected 0\n" << endl;

  GeographicLocation g(34.0007, -81.0348);
  if ( g.GetLatitude() == 34.0007  && g.GetLongitude() == -81.0348 )
    cout << "Passed constructor good values test\n" << endl;
  else
    cout << "Failed constructor good values test. Latitude = "
         << g.GetLatitude() << ", expected 34.0007\nLongitude = "
         << g.GetLongitude() << ", expected -81.0348\n" << endl;

  GeographicLocation g2(-97, 185);
  if ( g2.GetLatitude() == 0  && g2.GetLongitude() == 0 )
    cout << "Passed constructor bad values test" << endl;
  else
    cout << "Failed constructor bad values test. Latitude = "
         << g2.GetLatitude() << ", expected 0\nLongitude = "
         << g2.GetLongitude() << ", expected 0" << endl;

  return 0;
}
