// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<geographiclocation.h>
#include<historicsite.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  GeographicLocation * gp;
  gp = new HistoricSite("National Mall", 1791, 38.8875, -77.0364);
  gp->Print();
  cout << endl;
  delete gp;
  gp = new GeographicLocation(-1, -5);
  gp->Print();
  cout << endl;
  return 0;
}
