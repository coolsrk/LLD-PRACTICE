#pragma once
#include<iostream>
#include "interfaces/IEngine.h"
using namespace std;

class ScorpioEngine: public IEngine {
    public:

    void createEngine(){
        cout<<"Creating a ScorpioEngine"<<endl;
    }
};