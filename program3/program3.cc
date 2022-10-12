// Copyright 2022 CSCE240 bhipp
// Program 3 test driver
#include<word_search_functions.h>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;

int main() {
  Position start;
  string file_name = "grid.txt";
  char the_grid[kSize][kSize];
  if ( ReadWordSearch(file_name, the_grid) ) {
    PrintWordSearch(the_grid);
  } else {
    cout << "Couldn't open " << file_name << "\nExiting program." << endl;
    return 0;
  }
  string find_it;
  bool found;

  do {
    found = false;
    cin >> find_it;
    start = FindWordRight(the_grid, find_it);
    if ( start.row != -1 || start.col != -1 ) {
      found = true;
      cout << "found " << find_it << " at " << start.row << ", " << 
start.col
           << " written from left to right" << endl;
    }

    start = FindWordLeft(the_grid, find_it);
    if ( start.row != -1 || start.col != -1 ) {
      found = true;
      cout << "found " << find_it << " at " << start.row << ", " << 
start.col
           << " written from right to left" << endl;
    }

    start = FindWordDown(the_grid, find_it);
    if ( start.row != -1 || start.col != -1 ) {
      found = true;
      cout << "found " << find_it << " at " << start.row << ", " << 
start.col
           << " written down" << endl;
    }

    start = FindWordUp(the_grid, find_it);
    if ( start.row != -1 || start.col != -1 ) {
      found = true;
      cout << "found " << find_it << " at " << start.row << ", " << 
start.col
           << " written up" << endl;
    }

    start = FindWordDiagonal(the_grid, find_it);
    if ( start.row != -1 || start.col != -1 ) {
      found = true;
      cout << "found " << find_it << " at " << start.row << ", " << 
start.col
           << " written diagonally down" << endl;
    }

    if ( !found )
      cout << "could not find " << find_it << endl;
  } while ( find_it != "quit" );
  return 0;
}
