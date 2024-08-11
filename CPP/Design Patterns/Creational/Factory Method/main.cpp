#include "interfaces/IScorpio.h"
#include "ScorpioClassic.h"
#include "ScorpioN.h"
#include<iostream>

int main(){
    IScorpio *s1 = new ScorpioN();
    s1->driveScorpio();
    IScorpio *s2 = new ScorpioClassic();
    s2->driveScorpio();
};