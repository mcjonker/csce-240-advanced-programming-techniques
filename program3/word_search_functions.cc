// Copyright 2022 Mitchell Jonker
#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>
#include "word_search_functions.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::stringstream;
bool ReadWordSearch(string file_name, char word_search[][kSize]) {
  int i = 0;
  ifstream input_file(file_name);  // Input file stream
  while (i < kSize) {
    int j = 0;
    string CurrentLine;
    input_file >> CurrentLine;
    if (CurrentLine.length() < kSize) {
      return false;
    }
    while (j < kSize) {
      word_search[i][j] = CurrentLine[j];
      j++;
    }
    i++;
  }
  if (i >= kSize) {
    return true;
  } else {
    return false;
  }
}
void PrintWordSearch(const char word_search[][kSize]) {
  int i = 0;
  int j = 0;
  while (i < kSize) {
    j = 0;
    while (j < kSize) {
      // Print with space and indent
      cout << word_search[i][j] << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}
Position FindWordRight(const char word_search[][kSize], string to_find) {
  int StringLength = to_find.length();
  // Initiate Returning Position Object
  Position ReturnPosition;
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  if (StringLength > kSize) {  // String must fit within word_search size.
    return ReturnPosition;
  }
  int x = 0;
  int y = 0;
  while (y < kSize) {  // Scan each row
    x = 0;
    // Scan each row for the word. Make sure not to scan past the row's end.
    while (x+StringLength-1 <= kSize) {
      string StringParse;
      ReturnPosition.col = x;
      ReturnPosition.row = y;
      int i = 0;
      // Init stringstream
      stringstream ss;
      while (i < StringLength) {  // Fill the stringstream with chars.
        if (x+i < kSize) {
          ss << word_search[y][x+i];
        } else {
          break;
        }
        i++;
      }
      // Store String, then always clear the stringstream.
      ss >> StringParse;
      ss.str("");
      ss.clear();
      if (StringParse == to_find) {
        return ReturnPosition;
      }
      x++;
    }
    y++;
  }
  // If function bottoms out (word not found), return -1, -1.
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  return ReturnPosition;
}
Position FindWordLeft(const char word_search[][kSize], string to_find) {
  int StringLength = to_find.length();
  // Initiate Returning Position Object
  Position ReturnPosition;
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  if (StringLength > kSize) {  // String must fit within word_search size.
    return ReturnPosition;
  }
  int x = kSize;
  int y = 0;
  while (y < kSize) {  // Scan each row
    x = kSize;
    // Scan each row for the word. Make sure not to scan past the row's end.
    while (x-StringLength >= 0) {
      string StringParse;
      ReturnPosition.col = x-1;
      ReturnPosition.row = y;
      int i = 0;
      // Init stringstream
      stringstream ss;
      while (i < StringLength) {  // Fill the stringstream with chars.
        if (x-i > 0) {
          ss << word_search[y][x-i-1];
        } else {
          break;
        }
        i++;
      }
      // Store String, then always clear the stringstream.
      ss >> StringParse;
      ss.str("");
      ss.clear();
      if (StringParse == to_find) {
        return ReturnPosition;
      }
      x--;
    }
    y++;
  }
  // If function bottoms out (word not found), return -1, -1.
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  return ReturnPosition;
}
Position FindWordDown(const char word_search[][kSize], string to_find) {
  int StringLength = to_find.length();
  Position ReturnPosition;
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  if (StringLength > kSize) {  // String must fit within word_search size.
    return ReturnPosition;
  }
  int x = 0;
  int y = 0;
  while (x < kSize) {
    y = 0;  // Reset y each iteration.
    while (y+StringLength-1 <= kSize) {
      string StringParse;
      ReturnPosition.col = x;
      ReturnPosition.row = y;
      int i = 0;
      stringstream ss;
      while (i < StringLength) {  // Fill the stringstream with chars.
        if (y+i < kSize) {
          ss << word_search[y+i][x];
        } else {
          break;
        }
        i++;
      }
      ss >> StringParse;
      ss.str("");
      ss.clear();
      if (StringParse == to_find) {
        return ReturnPosition;
      }
      y++;
    }
    x++;
  }
  // If function bottoms out (word not found), return -1, -1.
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  return ReturnPosition;
}
Position FindWordUp(const char word_search[][kSize], string to_find) {
  int StringLength = to_find.length();
  Position ReturnPosition;
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  if (StringLength > kSize) {  // String must fit within word_search size.
    return ReturnPosition;
  }
  int x = 0;
  int y = kSize;
  while (x < kSize) {
    y = kSize;  // Reset y each iteration.
    while (y-StringLength+2 >= 0) {
      string StringParse;
      ReturnPosition.col = x;
      ReturnPosition.row = y;
      int i = 0;
      stringstream ss;
      while (i < StringLength) {  // Fill the stringstream with chars.
        if (y-i < kSize) {
          ss << word_search[y-i][x];
        } else {
          break;
        }
        i++;
      }
      ss >> StringParse;
      ss.str("");
      ss.clear();
      if (StringParse == to_find) {
        return ReturnPosition;
      }
      y--;
    }
    x++;
  }
  // If function bottoms out (word not found), return -1, -1.
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  return ReturnPosition;
}
Position FindWordDiagonal(const char word_search[][kSize], string to_find) {
  int StringLength = to_find.length();
  // Initiate Returning Position Object
  Position ReturnPosition;
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  if (StringLength > kSize) {  // String must fit within word_search size.
    return ReturnPosition;
  }
  int x = 0;
  int y = kSize;
  while (y > -1) {  // Scan each row
    x = 0;
    // Scan each row for the word. Make sure not to scan past the row's end.
    string StringParse;
    ReturnPosition.col = x;
    ReturnPosition.row = y;
    int TempV = 0;
    stringstream ss;
    while (x+TempV < kSize && y+TempV < kSize) {
      // Diagonally travel the char array to fill stringstream.
      ss << word_search[y+TempV][x+TempV];
      TempV++;
    }
    ss >> StringParse;
    ss.str("");
    ss.clear();
    int k = 0;
    int l = 0;
    string DiagonalCheck;
    // Travel through the Parsed String, see if to_find is contained.
    while (k < StringParse.length()) {
      k = l;
      while (k-l < to_find.length()) {
        ss << StringParse[k];
        k++;
      }
      ss >> DiagonalCheck;
      ss.str("");
      ss.clear();
      if (DiagonalCheck == to_find) {
        // If found, return with adjusted coord for bottom half of diagonal.
        ReturnPosition.col = x+l;
        ReturnPosition.row = y+l;
        return ReturnPosition;
      }
      l++;
    }
  y--;
  }
  x = 0;
  while (x < kSize) {
    string StringParse;
    ReturnPosition.col = x;
    ReturnPosition.row = y;
    int TempV = 1;
    stringstream ss;
    while (x+TempV < kSize && y+TempV < kSize) {
      ss << word_search[y+TempV][x+TempV];
      TempV++;
    }
    ss >> StringParse;
    ss.str("");
    ss.clear();
    int k = 0;
    int l = 0;
    string DiagonalCheck;
    while (l < StringParse.length()) {
      k = l;
      while (k-l < to_find.length()) {
        ss << StringParse[k];
        k++;
      }
      ss >> DiagonalCheck;
      ss.str("");
      ss.clear();
      if (DiagonalCheck == to_find) {
        // If found, adjust coordinate for second half of diagonals.
        ReturnPosition.col = x+l+1;
        ReturnPosition.row = y+l+1;
        return ReturnPosition;
      }
      l++;
    }
    x++;
  }
  // If function bottoms out (word not found), return -1, -1.
  ReturnPosition.row = -1;
  ReturnPosition.col = -1;
  return ReturnPosition;
}
