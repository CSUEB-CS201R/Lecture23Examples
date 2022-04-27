#include <iostream>
#include <iomanip>
#include "PassFailActivity.h"

using namespace std;

//Function declaration for displayGrade
void displayGrade(const GradedActivity &);
//Precondition: GradedActivity object is initialized at the memory address in the argument
//Postcondition: returns numeric score and letter grade

int main()
{
    //create a PassFailActivity object named "test".  minimum passing score 70

    PassFailActivity test(70);

    //set the score to 72
    test.setScore(72);

    //display the object's  grade data.  The letter grade should be P.

    cout << "Testing the passing grade case: " << endl;
    displayGrade(test);

    return 0;


}

void displayGrade(const GradedActivity &activity)
{
    cout << setprecision(1) << fixed;
    cout << "The activity's numeric score is: "
    << activity.getScore() << endl;
    cout << "The activity's letter grade is: "
    << activity.getLetterGrade() << endl;
}
