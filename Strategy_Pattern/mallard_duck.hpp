#ifndef __MALLARD_DUCK__
#define __MALLARD_DUCK__

#include "duck.hpp"

class MallardDuck: public Duck
{
    public:

        MallardDuck()
        {
            setFlyBehavior(new FlyWithWings());
            setQuackBehavior(new Quack());
        }

        void display() override
        {
            std::cout << "I'm a Mallard Duck!!!\n";
        }
};

#endif