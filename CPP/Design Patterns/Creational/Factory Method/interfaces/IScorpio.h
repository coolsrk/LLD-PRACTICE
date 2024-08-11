#pragma once
#include<bits/stdc++.h>
#include "IEngine.h"
#include "IBody.h"
#include "../ScorpioEngine.h"
#include "../ScorpioBody.h"

using namespace std;

class IScorpio {
   public:

   IEngine *engine;
   IBody *body; 

    // Build it before make it
    // This is the Factory Method
    virtual void buildScorpio() = 0;
    
    virtual void driveScorpio() = 0;
};