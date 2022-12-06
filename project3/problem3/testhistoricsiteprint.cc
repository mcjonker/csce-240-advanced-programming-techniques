// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<historicsite.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  HistoricSite null_island;
  null_island.Print();
  cout << "\n\n";
  HistoricSite columbia("home of the gamecocks", 1801, 33.9938, -81.0299);;
  columbia.Print();
  cout << endl;
  return 0;
}
