//
// Created by Paul Raupach on 4/27/22.
//

#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const {
    char grade = 'A';
    double percentage = getScore();
    if ( percentage > 89) grade = 'A';
    else if (percentage > 79) grade = 'B';
    else if (percentage > 69) grade = 'C';
    else if (percentage > 59) grade = 'D';
    else grade = 'F';
    return grade;
}
