#include "Dealership.h"
#include <iostream>
#include <algorithm>

using namespace std;

Dealership :: Dealership(){}

Dealership::Dealership(std::string dealershipName){
    this->name = dealershipName;
}

void Dealership::addCar(Car addedCar){
    this->carLot.push_back(addedCar);
}

void Dealership::deleteCar(int deletedCarId){
    auto it = find_if(carLot.begin(), carLot.end(), [deletedCarId](Car &car) { return car.getId() == deletedCarId; });
    if(it != carLot.end()){
        const Car &deletedCar = *it;
        soldCars.push_back(deletedCar);
        carLot.erase(it);
        carCount--;
    }
    else{
        cout << "Car not found!\n";
    }
    }


void Dealership::printCars(){
    cout << "Available Cars: \n\n";
    for(unsigned int i = 0; i< carLot.size(); i++){
        carLot[i].printCar();
        cout << "\n";
    }
    cout << "Sold Cars:\n\n";
    for (Car x: soldCars) {
        x.printCar();
        cout << "\n";
    }



}
