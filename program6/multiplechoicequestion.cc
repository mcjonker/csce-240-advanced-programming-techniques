// Copyright 2022 Mitchell Jonker

#include <string>
#include <iostream>
#include "multiplechoicequestion.h"
using std::cout;
using std::endl;
using std::string;

namespace csce240_program6 {

MultipleChoiceQuestion::MultipleChoiceQuestion(string q,
  int n, string * a, bool * b) : Question(q) {
  if (n == 0) {
    num_choices_ = 0;  // n
    answers_ = a;
    booleans_ = b;
  } else {
    SetAnswerChoices(n, a, b);
  }
}
// Copy Constructor
MultipleChoiceQuestion::MultipleChoiceQuestion(const
  MultipleChoiceQuestion & to_copy) : Question(to_copy.GetQuestion()) {
  SetAnswerChoices(to_copy.GetNumberOfChoices(), to_copy.GetAnswerChoices(),
                   to_copy.GetCorrectAnswers());
}
// Destructor
MultipleChoiceQuestion::~MultipleChoiceQuestion() {
  delete [] answers_;
  delete [] booleans_;
}
// Mutators
void MultipleChoiceQuestion::SetNumberOfChoices(int n) {
  if (n >= 0) {
    num_choices_ = n;
  } else {
    num_choices_ = 0;
  }
}
void MultipleChoiceQuestion::SetAnswerChoices(int n, string * a, bool * b) {
  // Memory Management
  if (n < 0) {
    return;
  }
  // Clean up old space
  if (n != num_choices_) {
    if (num_choices_ > 0) {
      answers_ = nullptr;
      booleans_ = nullptr;
    }
    // Create new space
    if (n > 0) {
      answers_ = new string[n];
      booleans_ = new bool[n];
    }
    // Account for any errors
    if ((answers_ == NULL && booleans_ == NULL)
        || (answers_ == nullptr && booleans_ == nullptr)) {
      cout << "Could not reserve requested space" << endl;
      exit(1);
    }
  }
  num_choices_ = n;

  if (num_choices_ == 0) {
    answers_ = nullptr;
    booleans_ = nullptr;
  }
  // Store values in MCQ Object
  for (int i = 0; i < num_choices_; ++i) {
    answers_[i] = a[i];
    if (b != nullptr) {
      booleans_[i] = b[i];
    } else {
      // Otherwise, make value true
      booleans_[i] = true;
    }
  }
}
void MultipleChoiceQuestion::Print(bool include_correct_answer) const {
  cout << "Question: " << GetQuestion() << endl;
  cout << "Answer Choices:" << endl;
  int i = 0;
  while (i < num_choices_) {
    if (include_correct_answer) {
      string truth = " - incorrect";
      if (booleans_[i]) {
        truth = " - correct";
      }
      cout << answers_[i] << truth << endl;
    } else {
      cout << answers_[i] << endl;
    }
    i++;
  }
}
}  // namespace csce240_program6
