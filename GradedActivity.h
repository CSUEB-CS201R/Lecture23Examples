

class GradedActivity {
private:
    double score;

public:
    //default constructor
    GradedActivity() {
        score = 0.0;
    }

    //alternative constructor
    GradedActivity(double inputScore) {
        score = inputScore;
    }

    //Mutator function
    void setScore(double newScore) {
        score = newScore;
    }

    //Accessor function
    double getScore() const {
        return score;
    }

    //getLetterGrade function is not declared inline since it is longer

    char getLetterGrade() const;
    //virtual char getLetterGrade() const;
    //Precondition: private variable score is initialized to a value out of 100 points possible
    //Postcondition: returns letter grade calculated based on the value of score
    //>89 = A, 79 to 89 = B, 69 to 79 = C, 59 to 69 = D, below 59 = F,
};