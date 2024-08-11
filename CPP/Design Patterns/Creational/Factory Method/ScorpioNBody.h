#pragma once
#include <iostream>
#include "interfaces/IBody.h"
using namespace std;

class ScorpioNBody: public IBody {
    public:
    void createBody(){
        cout<<"Creating a body for ScorpioNBody"<<endl;
    }
};
