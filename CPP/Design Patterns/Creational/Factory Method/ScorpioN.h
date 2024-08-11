#pragma once
#include<bits/stdc++.h>
#include "interfaces/IScorpio.h"
#include "ScorpioNBody.h"
#include "ScorpioNEngine.h"
#include "interfaces/IEngine.h"
#include "interfaces/IBody.h"
using namespace std;

class ScorpioN: public IScorpio {
    public: 
    // Build it before make it
    // This is the Factory Method
    void buildScorpio() {
        cout<<"Building ScorpioN"<<endl;
        IEngine *engine = new ScorpioNEngine();
        engine->createEngine();
        IBody *body = new ScorpioNBody();
        body->createBody();
    }
    
    void driveScorpio(){
        buildScorpio();
        cout<<"Inside ScorpioN class driveScorpio()"<<endl;
    }
};