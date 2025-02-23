#ifndef __CURRENT_CONDITIONS__
#define __CURRENT_CONDITIONS__

#include "observer.hpp"
#include "displayable.hpp"
#include "subject.hpp"
#include <iostream>

class CurrentConditions: public Observer, public Displayable
{
    private:
        float temperature;
        float humidity;
        Subject* subject;
    public:
        CurrentConditions(Subject* s)
        {
            subject = s;
            s->registerObserver(this);
        }

        void update(float temp, float hum, float pressure) override
        {
            temperature = temp;
            humidity = hum;
            // ignore pressure for this display
            display();
        }

        void display() override
        {
            std::cout << "current conditions -> temp: " << temperature << " humidity: " << humidity << "\n";
        }

        
};


#endif