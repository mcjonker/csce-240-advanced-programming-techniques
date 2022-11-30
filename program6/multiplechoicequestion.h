// Copyright 2022 Mitchell Jonker
// Header implementation by Mitchell Jonker

#ifndef PROGRAM6_MULTIPLECHOICEQUESTION_H_
#define PROGRAM6_MULTIPLECHOICEQUESTION_H_
#include <string>
#include "question.h"
using std::string;

namespace csce240_program6 {

class MultipleChoiceQuestion : public Question {
  public:
    // Explicit Constructor
    explicit MultipleChoiceQuestion(string = "?", int = 0,
                                    string * = nullptr, bool * = nullptr);
    // Copy Constructor
    MultipleChoiceQuestion(const MultipleChoiceQuestion &);
    // Destructor
    virtual ~MultipleChoiceQuestion();
    // Mutators
    void SetNumberOfChoices(int n);
    void SetAnswerChoices(int, string *, bool *);  // Mutator for ans and bool
    // Accessors
    int GetNumberOfChoices() const { return num_choices_; }
    string * GetAnswerChoices() const { return answers_; }
    bool * GetCorrectAnswers() const { return booleans_; }
    virtual void Print(bool include_correct_answer = false) const;

  private:
    int num_choices_;  // Number of possible answers
    string * answers_;  // Reference for list of possible answers
    bool * booleans_;  // Reference for list of answers validities
};

}  // namespace csce240_program6

#endif  // PROGRAM6_MULTIPLECHOICEQUESTION_H_

// MultipleChoiceQuestion should be a child of the Question class

// The class should have a private integer data member that holds the number
// of answer choices for the question. Add an accessor and mutator function
// for this data member

// The class should have a private string pointer data member that holds the
// answer choices for the question.

// The class should have a private bool pointer data member that holds whether
// each of the answer choices for the question is correct or not.

// Create an explicit constructor that allows the question, the number of
// choices, the answer choices, and the answer correct/incorrect values to be
// initialized when the object is instantiated. The parameters should have
// default argments of "?", 0, nullptr, and nullptr, respectively.
// The prototype is provided below

// Create a copy constructor (note: this is required since your class has
// pointers as data members)

// Create a virtual destructor that frees up all dynamically allocated memory

// Add a SetAnswerChoices function that sets the number of choices, the values
// of the answer choices, and the answer correct/incorrect values. This function
// will dynamically allocate and deallocate memory for the data members, as
// necessary. The prototype is provided below

// Add a virtual Print function (see the Question class for the prototype)
// This fuction should send output to the standard output device, using cout.
// The first line of output should be "Question: " followed by the value of
// the question data member.
// The next line of output should be "Answer Choices:"
// The following lines should print each answer a separate line.
// If the Print function's argument is true, each answer choice should be
// followed by " - correct" or " - incorrect"
