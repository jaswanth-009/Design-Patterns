#ifndef __FLY_WITH_WINGS__
#define __FLY_WITH_WINGS__

#include "fly_behavior.hpp"

class FlyWithWings: public FlyBehavior
{
    public:
        void fly() override
        {
            std::cout << "Flying with wings!!!\n";
        }
};

#endif