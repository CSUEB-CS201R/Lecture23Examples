
#ifndef INHERITANCEGRADEDACTIVITYEXAMPLE_PASSFAILACTIVITY_H
#define INHERITANCEGRADEDACTIVITYEXAMPLE_PASSFAILACTIVITY_H

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity {
protected:
    double minPassingScore;   //minimum passing score

public:
    //default constructor

    PassFailActivity() : GradedActivity() {
        minPassingScore = 0.0;
    }

    //constructor
    PassFailActivity(double mps) : GradedActivity() {
        minPassingScore = mps;
    }

    //Mutator
    void setMinPassingScore(double mps) {
        minPassingScore = mps;
    }

    //Accessors
    double getMinPassingScore() const {
        return minPassingScore;
    }

    //redefined getLetterGrade for PassFailActivity
    char getLetterGrade() const;
    //Precondition: PassFailObject activity is initialized
    //returns "P" if score >= minPassingScore, otherwise returns "F"

};


#endif //INHERITANCEGRADEDACTIVITYEXAMPLE_PASSFAILACTIVITY_H
