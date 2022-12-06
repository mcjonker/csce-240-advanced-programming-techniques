// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<historicsite.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  HistoricSite null_island;
  null_island.SetDescription("Null Island");
  if ( null_island.GetDescription() == "Null Island" )
    cout << "Passed set description test" << endl;
  else
    cout << "Failed set description test.\nDescription = "
         << null_island.GetDescription() << ", expected Null Island" << endl;
  return 0;
}
