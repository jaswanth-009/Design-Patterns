#ifndef __DISPLAYABLE__
#define __DISPLAYABLE__

class Displayable
{
    public:
        virtual void display() = 0;
        virtual ~Displayable() {}
};

#endif