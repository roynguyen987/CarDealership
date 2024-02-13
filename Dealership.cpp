#include "Dealership.h"
#include <iostream>

using namespace std;

Dealership :: Dealership(){}

Dealership::Dealership(std::string dealershipName){
    this->name = dealershipName;
}

void Dealership::addCar(Car addedCar){
    this->carLot.push_back(addedCar);
}
/*
void Dealership::deleteCar(int deletedCarId){
    auto it = find(carLot.begin(), carLot.end(), [deletedCarId](const Car &car) { return car.id == deletedCarId; });\
    if(it != carLot.end()){
        carLot.erase(it);
        carCount--;
    }
    else{
        cout << "Car not found!\n";
    }
    }
*/

void Dealership::printCars(){
    for(unsigned int i = 0; i< carLot.size(); i++){
        carLot[i].printCar();
        cout << "\n";
    }
}