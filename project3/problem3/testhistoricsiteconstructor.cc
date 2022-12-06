// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<historicsite.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  HistoricSite null_island;
  if ( null_island.GetDescription() == "" &&
       null_island.GetYearEstablished() == 0 &&
       null_island.GetLatitude() == 0  && null_island.GetLongitude() == 0 )
    cout << "Passed default constructor test\n" << endl;
  else
    cout << "Failed default constructor test.\nDescription = "
         << null_island.GetDescription() << ", expected\nYear Established = "
         << null_island.GetYearEstablished() << ", expected 0\nLatitude = "
         << null_island.GetLatitude() << ", expected 0\nLongitude = "
         << null_island.GetLongitude() << ", expected 0\n" << endl;

  HistoricSite columbia("home of the gamecocks", 1801, 33.9938, -81.0299);
  if ( columbia.GetDescription() == "home of the gamecocks" &&
       columbia.GetYearEstablished() == 1801 &&
       columbia.GetLatitude() == 33.9938  &&
       columbia.GetLongitude() == -81.0299 )
    cout << "Passed constructor good values test" << endl;
  else
    cout << "Failed constructor good values test.\nDescription = "
         << columbia.GetDescription()
         << ", expected home of the gamecocks\nYear Established = "
         << columbia.GetYearEstablished() << ", expected 1801\nLatitude = "
         << columbia.GetLatitude() << ", expected 33.9938\nLongitude = "
         << columbia.GetLongitude() << ", expected -81.0299" << endl;
  return 0;
}
