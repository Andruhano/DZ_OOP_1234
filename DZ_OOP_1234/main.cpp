#include <iostream>
#include "car.h"
using namespace std;

int main() 
{

    system("chcp 1251");

    Car car1;
    cout << "¬ведите данные дл€ первой машины:" << endl;
    car1.input();
    car1.display();

    Car car2("Toyota", "Camry", 2022, 25000.0);
    car2.display();

    return 0;
}
