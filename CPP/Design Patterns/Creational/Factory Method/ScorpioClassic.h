#pragma once
#include<bits/stdc++.h>
#include "interfaces/IScorpio.h"
#include "ScorpioClassicEngine.h"
#include "ScorpioClassicBody.h"
#include "interfaces/IEngine.h"
#include "interfaces/IBody.h"
using namespace std;

class ScorpioClassic: public IScorpio {
    public: 
    // Build it before make it
    // This is the Factory Method
    void buildScorpio() {
        cout<<"Building ScorpioClassic"<<endl;
        IEngine *engine = new ScorpioClassicEngine();
        engine->createEngine();
        IBody *body = new ScorpioClassicBody();   
        body->createBody();
    }
    
    void driveScorpio(){
        buildScorpio();
        cout<<"Inside ScorpioClassic class driveScorpio()"<<endl;
    }
};