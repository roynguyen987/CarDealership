#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int id;
    int year;
    int price;
    bool used;
    void printCar();
    Car();
    Car(std::string make, std::string model, int year, int id, int price, bool used);
};

#endif // CAR_H