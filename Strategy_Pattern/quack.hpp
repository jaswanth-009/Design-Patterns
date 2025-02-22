#ifndef __QUACK__
#define __QUACK__

#include "quack_behavior.hpp"

class Quack: public QuackBehavior
{
    public:
        void quack() override
        {
            std::cout << "Quack Quack!!!\n";
        }
};

#endif