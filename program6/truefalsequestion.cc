// Copyright 2022 Mitchell Jonker

#include <string>
#include <iostream>
#include "truefalsequestion.h"
using std::cout;
using std::endl;
using std::string;

namespace csce240_program6 {

TrueFalseQuestion::TrueFalseQuestion(string q, bool a) {
  SetQuestion(q);
  answer_ = a;
}
void TrueFalseQuestion::Print(bool include_correct_answer) const {
  string q = GetQuestion();
  bool a = GetAnswer();
  cout << "Question: " << q << endl;
  if (include_correct_answer == true) {
    string o = "true";
    if (!a) {
      o = "false";
    }
    cout << "Correct Answer: " << o << endl;
  }
}
}  // namespace csce240_program6
