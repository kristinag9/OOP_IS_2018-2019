#include "Dog.h"
#include "Bird.h"

int main()
{
    Animal* dog = new Dog();
    dog->sayHello();

    Animal* bird = new Bird();
    bird->sayHello();

    return 0;
}
