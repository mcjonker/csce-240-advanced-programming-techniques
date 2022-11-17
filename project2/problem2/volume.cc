// Copyright 2022 CSCE240
// Class implemented by Mitchell Jonker
// Exam 2 problem 2 implement the Volume class
#include "volume.h"
Volume::Volume(double quantity, string unit_type) {
  quantity_ = 0;
  unit_type_ = "ounces";
  SetQuantity(quantity);
  SetMeasure(unit_type);
}
double Volume::GetQuantity() const {
  return quantity_;
}
void Volume::SetQuantity(double quantity) {
  if (quantity >= 0) {
    quantity_ = quantity;
  }
}
string Volume::GetMeasure() const {
  return unit_type_;
}
// ounces, tablespoons, teaspoons, cups
void Volume::SetMeasure(string unit_type) {
  string units_array[4] = {"ounces", "tablespoons",
    "teaspoons", "cups"};
  for (int i = 0; i < 4; i++) {
    if (unit_type == units_array[i]) {
      unit_type_ = unit_type;
      return;
    }
  }
}
// 1 cup = 8 ounces = 16 tablespoons = 48 teaspoons
void Volume::Convert(string unit_type) {
  string units_array[4] = {"ounces", "tablespoons",
    "teaspoons", "cups"};
  if (unit_type_ == unit_type) {  // if units are the same
    return;
  }
  if (unit_type == units_array[0]) {  // to ounces
    if (unit_type_ == units_array[1]) {  // from tablespoons
      quantity_ = quantity_/2;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[2]) {  // from teaspoons
      quantity_ = quantity_/6;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[3]) {  // from cups
      quantity_ = quantity_*8;
      unit_type_ = unit_type;
    }
  }
  if (unit_type == units_array[1]) {  // to tablespoons
    if (unit_type_ == units_array[0]) {  // from ounces
      quantity_ = quantity_*2;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[2]) {  // from teaspoons
      quantity_ = quantity_/3;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[3]) {  // from cups
      quantity_ = quantity_*16;
      unit_type_ = unit_type;
    }
  }
  if (unit_type == units_array[2]) {  // to teaspoons
    if (unit_type_ == units_array[0]) {  // from ounces
      quantity_ = quantity_*6;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[1]) {  // from tablespoons
      quantity_ = quantity_*3;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[3]) {  // from cups
      quantity_ = quantity_*48;
      unit_type_ = unit_type;
    }
  }
  if (unit_type == units_array[3]) {  // to cups
    if (unit_type_ == units_array[0]) {  // from ounces
      quantity_ = quantity_/8;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[1]) {  // from tablespoons
      quantity_ = quantity_/16;
      unit_type_ = unit_type;
    }
    if (unit_type_ == units_array[2]) {  // from teaspoons
      quantity_ = quantity_/48;
      unit_type_ = unit_type;
    }
  }
}
void Volume::Add(Volume vol_object) {
  vol_object.Convert(unit_type_);
  quantity_ = quantity_ + vol_object.GetQuantity();
}
