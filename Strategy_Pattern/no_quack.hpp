#ifndef __NO_QUACK__
#define __NO_QUACK__

#include "quack_behavior.hpp"

class NoQuack: public QuackBehavior
{
    public:
        void quack() override
        {
            std::cout << "Can't Quack!!!\n";
        }
};

#endif