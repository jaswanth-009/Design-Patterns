#ifndef __DUCK__
#define __DUCK__

#include "fly_with_wings.hpp"
#include "no_fly.hpp"
#include "quack.hpp"
#include "no_quack.hpp"

class Duck
{
    private:
        FlyBehavior*   fly = nullptr;
        QuackBehavior* quack = nullptr;
    public:
        void swim()
        {
            std::cout << "Swimming...\n";
        }
        virtual void display()
        {
            std::cout << "Image of a base duck\n";
        }
        void performFly() 
        { 
            fly->fly();
        }
        void performQuack()
        { 
            quack->quack();
        }

        void setFlyBehavior(FlyBehavior* f)
        {
            if(fly != nullptr)
            {
                delete fly;
            }
            fly = f;
        }
        void setQuackBehavior(QuackBehavior* q)
        {
            if(quack != nullptr)
            {
                delete quack;
            }
            quack = q;
        }
};

#endif