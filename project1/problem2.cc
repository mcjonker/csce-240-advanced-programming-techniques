// Copyright 2022 Mitchell Jonker
#include <iostream>
#include <cmath>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ios;
int main() {
  // Init Variables
  string MaxItem = "";
  string MinItem = "";
  int MaxItemQuant = 0;
  int MinItemQuant = 0;
  ifstream input_fileA("inventory.txt");  // Input File Stream
  // Find Max Item
  while (input_fileA.good()) {
    // Temporary Value Readers
    string CurrentItem;
    int CurrentQuant;
    input_fileA >> CurrentItem >> CurrentQuant;
    if (CurrentQuant > MaxItemQuant) {
      MaxItemQuant = CurrentQuant;
      MaxItem = CurrentItem;
    }
  }
  // Find Min Item
  ifstream input_fileB("inventory.txt");
  int CurrentMaxQuant = MaxItemQuant;  // Gathered from the loop above
  while (input_fileB.good()) {
    // Temporary Value Readers
    string CurrentItem;
    int CurrentQuant;
    input_fileB >> CurrentItem >> CurrentQuant;
    if (CurrentQuant < CurrentMaxQuant) {
      MinItemQuant = CurrentQuant;
      MinItem = CurrentItem;
      CurrentMaxQuant = CurrentQuant;
      cout << MinItemQuant << MinItem << endl;
    }
  }
  cout << "Highest inventory item: " << MaxItem << " quantity: "
  << MaxItemQuant << endl;
  cout << "Lowest inventory item: " << MinItem << " quantity: "
  << MinItemQuant << endl;
  return 0;
}
