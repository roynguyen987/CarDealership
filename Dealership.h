#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

class Dealership{
    public:
        std::string name = "";
        std::vector<Car> carLot = {};
        std::vector<Car> soldCars = {};
        int carCount = 0;
        void addCar(Car addedCar);
        //void deleteCar(int deletedCarId);
        void printCars();
        Dealership();
        Dealership(std::string dealershipName);

};