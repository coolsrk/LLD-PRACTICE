#pragma once
#include<iostream>
#include "interfaces/IEngine.h"
using namespace std;

class ScorpioClassicEngine: public IEngine {
    public:

    void createEngine(){
        cout<<"Creating a ScorpioClassicEngine"<<endl;
    }
};