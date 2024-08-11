#pragma once
#include<iostream>
#include "interfaces/IEngine.h"
using namespace std;

class ScorpioNEngine: public IEngine {
    public:

    void createEngine(){
        cout<<"Creating a ScorpioNEngine"<<endl;
    }
};