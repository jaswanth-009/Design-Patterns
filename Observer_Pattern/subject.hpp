#ifndef __SUBJECT__
#define __SUBJECT__

#include "observer.hpp"

class Subject
{
    public:
        virtual void registerObserver(Observer* o) = 0;
        virtual void removeObserver(Observer* o) = 0;
        virtual void notifyObservers() = 0;
        virtual ~Subject() {}
};

#endif