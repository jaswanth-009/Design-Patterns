#ifndef __DUMMY_DUCK__
#define __DUMMY_DUCK__

#include "duck.hpp"

class DummyDuck: public Duck
{
    public:
        DummyDuck()
        {
            setFlyBehavior(new NoFly());
            setQuackBehavior(new NoQuack());
        }

        void display() override
        {
            std::cout << "I'm a toy duck!!\n";
        }

};

#endif