// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<historicsite.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  HistoricSite null_island;
  null_island.SetYearEstablished(2022);
  if ( null_island.GetYearEstablished() == 2022 )
    cout << "Passed set year established test" << endl;
  else
    cout << "Failed set year established test.\nYear established = "
         << null_island.GetYearEstablished() << ", expected 2022" << endl;
  return 0;
}
