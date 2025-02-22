#include "mallard_duck.hpp"
#include "dummy_duck.hpp"

int main()
{
    Duck* d =  new MallardDuck();
    d->display();
    d->swim();
    d->performFly();
    d->performQuack();

    std::cout << "\n";

    Duck* d2 = new DummyDuck();
    d2->display();
    d2->swim();
    d2->performFly();
    d2->performQuack();

    delete d;
    delete d2;
    return 0;
}