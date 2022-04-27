

#include "PassFailActivity.h"

char PassFailActivity::getLetterGrade() const{
    char letterGrade;

    //use dot operator and this to get score
    //more commonly written as this->getScore()

    if((*this).getScore() >= minPassingScore)
        letterGrade = 'P';
    else
        letterGrade = 'F';

    return letterGrade;
}