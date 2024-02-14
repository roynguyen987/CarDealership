// Car.cpp
#include "Car.h"

Car::Car() {
    // Default constructor implementation
}

Car::Car(std::string make, std::string model, int year, int id, int price, bool used) {
    // Parameterized constructor implementation
    this->make = make;
    this->model = model;
    this->year = year;
    this->id = id;
    this->price = price;
    this->used = used;
}

void Car::setId(int newID){
    this->id = newID;
}

int Car::getId(){
    return this->id;
}

void Car::printCar() {
    // Implementation of the printCar function
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Used: " << (used ? "Yes" : "No") << std::endl;
    std::cout << std::flush; // Flush the output
}