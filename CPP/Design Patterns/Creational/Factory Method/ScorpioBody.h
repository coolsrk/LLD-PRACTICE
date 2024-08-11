#pragma once
#include <iostream>
#include "interfaces/IBody.h"
using namespace std;

class ScorpioBody: public IBody {
    public:

    void createBody(){
        cout<<"Creating a body for Scorpio"<<endl;
    }
};
