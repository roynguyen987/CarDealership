#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
using namespace std;

class Dealership{
    public:
        string name;
        vector<Car> carLot = {};
        vector<Car> soldCars = {};
        int carCount = 0;
        void addCar(Car deleteCar);
        void deleteCar(vector<Car> carlot);
        Dealership(string dealershipName){
            this->name = name;
        
        }

};