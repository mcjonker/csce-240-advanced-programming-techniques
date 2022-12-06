// Copyright 2022 Mitchell Jonker
// Final Exam Problem 3
#include "geographiclocation.h"
#include <string>
using std::string;
using std::cout;
using std::endl;
namespace csce240_sites {
GeographicLocation::GeographicLocation(double latitude, double longitude) {
  SetLatitude(0.0);
  SetLongitude(0.0);
  SetLatitude(latitude);
  SetLongitude(longitude);
}
// Mutators
void GeographicLocation::SetLatitude(double latitude) {
  if (latitude <= 90 && latitude >= -90) {
    latitude_ = latitude;
  }
}
void GeographicLocation::SetLongitude(double longitude) {
  if (longitude <= 180 && longitude >= -180) {
    longitude_ = longitude;
  }
}
// Print Function
void GeographicLocation::Print() const {
  string NS_dir = "N";
  string EW_dir = "E";
  double latitude = latitude_;
  double longitude = longitude_;
  if (latitude < 0) {
    NS_dir = "S";
    latitude = -1*latitude;
  }
  if (longitude < 0) {
    EW_dir = "W";
    longitude = -1*longitude;
  }
  cout << latitude << "\u00B0 " << NS_dir << ", "
  << longitude << "\u00B0 " << EW_dir;
}
}  // namespace csce240_sites
// implement the member functions for the GeographicLocation class in this file
