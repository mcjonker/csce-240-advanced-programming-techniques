// Copyright 2022 CSCE240 Exam 3 Problem 3
#include<geographiclocation.h>
using namespace csce240_sites;
#include<iostream>
using std::cout;
using std::endl;

int main() {
  GeographicLocation null_island;
  null_island.Print();
  cout << endl;
  GeographicLocation g(34.0007, -81.0348);
  g.Print();
  cout << endl;
  GeographicLocation g2(-7, 5.2);
  g2.Print();
  cout << endl;
  return 0;
}
