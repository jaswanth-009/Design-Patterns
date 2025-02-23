#ifndef __OBSERVER__
#define __OBSERVER__

class Observer
{
    public:
        virtual void update(float temperature = 0.0, float humidity = 0.0, float pressure = 0.0) = 0;
        virtual ~Observer() {}
};

#endif