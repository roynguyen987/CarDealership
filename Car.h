#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    int id;

public:
    std::string make;
    std::string model;
    int year;
    int price;
    bool used;
    void printCar();
    void setId(int id);
    int getId();

    Car();
    Car(std::string make, std::string model, int year, int id, int price, bool used);
};

#endif // CAR_H