// Copyright 2022 Mitchell Jonker
// Final Exam Problem 3
#include "historicsite.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
namespace csce240_sites {
HistoricSite::HistoricSite(string desc, int year,
              double latitude, double longitude) :
              GeographicLocation(latitude, longitude) {
  SetDescription("");
  SetYearEstablished(0);
  SetDescription(desc);
  SetYearEstablished(year);
}
// Print Function
void HistoricSite::Print() const {
  cout << "Historic Site" << endl << "Established: " << year_ << endl;
  cout << "Location: ";
  GeographicLocation::Print();
  cout << endl;
  cout << "Description: " << desc_;
}
}  // namespace csce240_sites
// implement the member functions for the HistoricSite class in this file
