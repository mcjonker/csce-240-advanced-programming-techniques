// Copyright 2022 Mitchell Jonker

#include <string>
#include <iostream>
#include "shortanswerquestion.h"
using std::cout;
using std::endl;
using std::string;

namespace csce240_program6 {

ShortAnswerQuestion::ShortAnswerQuestion(string q, string a) {
  SetQuestion(q);
  answer_ = a;
}
void ShortAnswerQuestion::Print(bool include_correct_answer) const {
  string q = GetQuestion();
  string a = GetAnswer();
  cout << "Question: " << q << endl;
  if (include_correct_answer == true) {
    cout << "Correct Answer: " << a << endl;
  }
}
}  // namespace csce240_program6
