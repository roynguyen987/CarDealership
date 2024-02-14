#include <iostream>
#include "Car.h"
#include "Dealership.h"
using namespace std;


int main() {
    Car myCar("Subaru", "WRX", 2021, 1, 17000, true);
    Car myCar2("Tesla", "ModelX", 2023, 2, 31000, true);
    Car myCar3("Toyota", "Camry", 2005, 3, 9000, false);
    Dealership dealer("Dealer1");
    dealer.addCar(myCar);
    dealer.addCar(myCar2);
    dealer.addCar(myCar3);
    dealer.deleteCar(2);
    dealer.printCars();


    return 0;
}
