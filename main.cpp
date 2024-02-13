#include <iostream>
#include "Car.h"
#include "Dealership.h"
using namespace std;


int main() {
    Car myCar("Chiken", "Slinga", 2021, 1, 20000, true);
    Car myCar2("The", "Batmobile", 2023, 2, 25100, true);
    Car myCar3("Toyota", "Camry", 2005, 3, 9000, false);
    Dealership dealer("Dealer1");
    dealer.addCar(myCar);
    dealer.addCar(myCar2);
    dealer.addCar(myCar3);
    dealer.printCars();


    return 0;
}
