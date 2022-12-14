// Copyright 2022 Mitchell Jonker
// Header implementation by Mitchell Jonker

#ifndef PROGRAM6_SHORTANSWERQUESTION_H_
#define PROGRAM6_SHORTANSWERQUESTION_H_
#include <string>
#include "question.h"
using std::string;

namespace csce240_program6 {

class ShortAnswerQuestion : public Question {
  public:
    explicit ShortAnswerQuestion(string q = "?", string a = "");
    virtual ~ShortAnswerQuestion() {}
    void SetAnswer(string a) { answer_ = a; }
    string GetAnswer() const { return answer_; }
    virtual void Print(bool include_correct_answer = false) const;
  private:
    string answer_;
};

}  // namespace csce240_program6

#endif  // PROGRAM6_SHORTANSWERQUESTION_H_

// ShortAnswerQuestion should be a child of the Question class

// The class should have a private string data member that holds the correct
// answer to the question. Add an accessor and mutator function for this data
// member

// Create an explicit constructor that allows the question and answer to be
// initialized when instantiated. The question and answer parameters should
// have default arguments of "?" and "", respectively.

// Add a virtual Print function (see the Question class for the prototype)
// This fuction should create 1 or 2 lines of output to the standard output
// device, using cout.
// The first line of output should be "Question: " followed by the value of
// the question data member.
// If the Print function's argument is true, it should output a second line
// that is "Correct Answer: " followed by the value of the correct answer
// private data member.
