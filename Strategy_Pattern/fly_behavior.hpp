#ifndef __FLY_BEHAVIOR__
#define __FLY_BEHAVIOR__

#include <iostream>

class FlyBehavior
{
    public:
        virtual void fly() = 0;
        virtual ~FlyBehavior() {};
};

#endif