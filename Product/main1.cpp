
#include <iostream>
#include "Fruit.h"
#include "Beer.h"

using namespace std;

int main()
{
    Fruit fruits[] = {
    Fruit("Apple", 3.5, 2.5),
    Fruit("Orange", 2.4, 1.2),
    Fruit("Banana", 0.5, 1),
    Fruit("Strawberries", 1.2, 3.2),
    Fruit("Watermelon", 5.3, 1.3)
    };

    Beer beers[] = {
    Beer("Heineken", "can", 3),
    Beer("Stella Artois", "glass bottle", 3.5),
    Beer("Pirinsko", "can", 2),
    Beer("Corona", "glass bottle", 5),
    Beer("Carlsberg", "glass bottle", 3)
    };

    Product* products[10];
    for(int i = 0; i < 5; i++)
    {
        products[i] = &fruits[i];
        products[i + 5] = &beers[i];
    }

    for(int i = 0; i < 10; i++)
    {
        products[i]->printProduct();
        cout << endl;
    }

    return 0;
}
