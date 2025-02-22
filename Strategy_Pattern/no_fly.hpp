#ifndef __NO_FLY__
#define __NO_FLY__

#include "fly_behavior.hpp"

class NoFly: public FlyBehavior
{
    public:
        void fly() override
        {
            std::cout << "Can't fly!!!\n";
        }
};

#endif