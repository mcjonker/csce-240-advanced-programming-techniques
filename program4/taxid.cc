// Copyright 2022 Mitchell Jonker

#include "taxid.h"
#include <string>
#include <iostream>
#include <sstream>
using std::string;
using std::stringstream;
using std::cout;
using std::endl;
// initalize the mask to "XXXXX####"
string TaxId::mask_ = "XXXXX####";
// Parameterized Constructor
TaxId::TaxId(string value) {
  // Default Values
  value_ = "000000000";
  // Specific Values
  SetId(value);
}
// Implement functions
void TaxId::SetMask(string mask) {
  bool isValid = true;
  int masklength = mask.length();
  // Insure string is of the specified length
  if (masklength == 9) {
    for (int i = 0; i < masklength; i++) {
      if (mask[i] == '#' || mask[i] == 'X') {
        isValid = true;
      } else {
        isValid = false;
        break;
      }
    }
  } else {
    isValid = false;
  }
  if (isValid) {
    mask_ = mask;
  }
}
string TaxId::GetMask() {
  return mask_;
}
void TaxId::SetId(string value) {
  stringstream ss;
  string value_corrected = "";
  int vallength = value.length();
  bool isValid = true;
  bool isLongForm = false;
  // Convert 11 digits into 9 digit TaxId
  if (vallength == 11) {
    isLongForm = true;
    if (value[3] == '-' && value[6] == '-') {
      int i = 0;
      while (i < vallength) {
        if (i == 3 || i == 6) {
          i++;
        }
        ss << value[i];
        i++;
      }
      ss >> value_corrected;
    }
    vallength = value_corrected.length();
  }
  // Process inputted (9-) or formatted (11-) digit ID.
  if (!isLongForm) {
    value_corrected = value;
  }
  if (vallength == 9) {
    int j = 0;
    while (j < vallength) {
      if (!(isdigit(value_corrected[j]))) {
        isValid = false;
        break;
      }
      j++;
    }
    if (isValid) {
      value_ = value_corrected;
    }
  }
}
string TaxId::GetId() const {
  string output = "";
  stringstream ss;
  for (int i = 0; i < 9; i++) {
    if (mask_[i] == 'X') {
      ss << 'X';
    } else {
      ss << value_[i];
    }
  }
  ss >> output;
  return output;
}
