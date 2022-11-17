// Copyright 2022 Mitchell Jonker

#ifndef _TAXID_H_
#define _TAXID_H_
#include <string>
#include <iostream>
using std::string;
using std::cout;

// You will need a constructor that allows a TaxId to be created with or
// without an initial 9-digit string argument. The tax id should default
// to 000000000. The constructor should be explicit.

class TaxId {
    // List members of the class
  public:
    // Generic Instance with Default Value
    explicit TaxId(string value_ = "000000000");
    static void SetMask(string mask_);
    static string GetMask();
    void SetId(string value_);
    string GetId() const;
  private:
    string value_;
    static string mask_;
};
// SetMask static function
// preconditions: The function will be sent a string which should contain
//                nine characters, the character X means to hide that digit
//                and the character # means to show that digit
// postconditions: The function will set the private data member mask to the
//                 argument sent if the argument is exactly nine characters
//                 long and only contains X and # as characters. Otherwise,
//                 mask will remain unchanged
// GetMask static function
//                 the function takes no parameters and returns the mask string
// SetId function
// preconditions: The function will be sent a string for the tax id. Excepted
//                formats are "#########" or "###-##-####"
// postconditions: If the argument is a string with exactly 9 digits, or an
//                 eleven character string with 3 digits, a dash, 2 digits,
//                 a dash, and 4 digits, then the id data member should be
//                 updated.
//                 If the argument does not meet one of the accepted formats
//                 the id data member should not be changed.
// GetId function
// the function should return a string with the id data member masked using
// the format specified by the static mask data member.
// For example, if the id data member is "123456789" and the static mask
// data member is "XXXXX####" then the GetId function should return the string
// "XXXXX6789"

#endif  // PROGRAM4_TAXID_H_
