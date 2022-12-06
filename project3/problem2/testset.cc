// Copyright 2022 CSCE240
#include<set.h>
// cpplint doesn't like the line below - we need it anyway
// ignore that message
#include<set.cc>
#include<string>
using std::string;

using namespace csce240_set;
int main() {
  int someints[14] = { 1, 8, 5, 7, 12, -3, 0, -4, 14, 27, 3, 16, -9, 99 };
  Set<int> set1(13, someints), set1copy(set1), set2(14, someints);
  set1.AddElement(1);
  if ( set1 == set1copy ) {
    cout << "Passed add existing element test" << endl;
  } else {
    cout << "Failed add existing element test" << endl;
    cout << "Set = " << set1 << "\nShould be " << set1copy << endl;
  }
  set1copy.AddElement(99);
  if ( set1copy == set2 ) {
    cout << "Passed add new element test" << endl;
  } else {
    cout << "Failed add new element test" << endl;
    cout << "Set = " << set1copy << "\nShould be " << set2 << endl;
  }
  return 0;
}
