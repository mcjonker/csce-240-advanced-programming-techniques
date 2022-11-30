// Copyright 2022 Mitchell Jonker
// Header implementation by Mitchell Jonker

#ifndef PROGRAM6_TRUEFALSEQUESTION_H_
#define PROGRAM6_TRUEFALSEQUESTION_H_
#include <string>
#include "question.h"
using std::string;

namespace csce240_program6 {

class TrueFalseQuestion : public Question {
  public:
    explicit TrueFalseQuestion(string q = "?", bool a = true);
    virtual ~TrueFalseQuestion() {}
    void SetAnswer(bool a) { answer_ = a; }
    bool GetAnswer() const { return answer_; }
    virtual void Print(bool include_correct_answer = false) const;
  private:
    bool answer_;
};

}  // namespace csce240_program6

#endif  // PROGRAM6_TRUEFALSEQUESTION_H_


// TrueFalseQuestion should be a child of the Question class

// The class should have a private bool data member that holds whether the
// answer to the question is true or false. Add an accessor and mutator
// function for this data member

// Create an explicit constructor that allows the question and answer to be
// initialized when an object is instantiated. The question and answer
// parameters should have default arguments of "?" and true, respectively.

// Add a virtual Print function (see the Question class for the prototype)
// This fuction should create 1 or 2 lines of output to the standard output
// device, using cout.
// The first line of output should be "Question: " followed by the value of
// the question data member.
// If the Print function's argument is true, it should output a second line
// that is "Correct Answer: " followed by "true" or "false" depending on the
// value of the private data member.
