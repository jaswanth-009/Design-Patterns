#ifndef __WEATHER_STATION__
#define __WEATHER_STATION__

#include "subject.hpp"
#include <vector>
#include <iostream>

class WeatherStation: public Subject
{
    private:
        std::vector<Observer*> obs;
        float temperature;
        float humidity;
        float pressure;
    public:
        void registerObserver(Observer* o) override
        {
            obs.push_back(o);
        }

        void removeObserver(Observer* o) override
        {
            size_t index;
            for(index = 0; index < obs.size(); index++)
            {
                if(obs[index] == o) break;
            }

            if(index == obs.size())
            {
                std::cout << "Unrecognized Observer...Can't delete\n";
            }
            else
            {
                obs.erase(obs.begin()+index);
            }
        }

        void notifyObservers() override
        {
            for(size_t i = 0; i < obs.size(); i++)
            {
                obs[i]->update(temperature, humidity, pressure);
            }
        }

        void measurementsChanged() { notifyObservers(); }

        void setMeasurements(float temp, float hum, float pre)
        {
            temperature = temp;
            humidity    = hum;
            pressure    = pre;
            measurementsChanged();
        }

        ~WeatherStation()
        {
            obs.clear();
        }
};

#endif