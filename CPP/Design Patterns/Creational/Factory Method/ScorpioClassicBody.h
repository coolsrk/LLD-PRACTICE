#pragma once
#include <iostream>
#include "interfaces/IBody.h"
using namespace std;

class ScorpioClassicBody: public IBody {
    public:

    void createBody(){
        cout<<"Creating a body for ScorpioClassicBody"<<endl;
    }
};
