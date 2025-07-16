#include "Laptop.h"
#include <iostream>

/*
 * John Candler
 * Assignment 1
 *
 * Laptop.cpp
*/


// -- Explicit-Value Constructor Definition
Laptop::Laptop(std::string brd, std::string mdl, int yr, double pr, int ram) {
    brand = brd;
    model = mdl;

    if (yr > 2000 && yr < 2025) {
	year = yr;
    } else {
	std::cout << "Invalid year! Setting year to 2025." << std::endl;
	year = 2025;
    }

    if (pr > 0) {
	price = pr;
    } else {
	std::cout << "Invalid price! Setting price to $500." << std::endl;
	price = 500;
    }

    if (ram > 0) {
	ramGB = ram;
    } else {
	std::cout << "Invalid RAM! Setting RAM to 8 GB." <<std::endl;
	ramGB = 8;
    }
}

// -- Getter Definitions
std::string Laptop::getBrand() const {
    return brand;
}

std::string Laptop::getModel() const {
    return model;
}

int Laptop::getYear() const {
    return year;
}

double Laptop::getPrice() const {
    return price;
}

int Laptop::getRamGB() const {
    return ramGB;
}

// -- Output Definition
void Laptop::display() const {
    std::cout << "Brand: " << getBrand() << ", Model: " << getModel() << ", Year: " << \
    getYear() << ", Price: $" << getPrice() << ", RAM: " << getRamGB() << std::endl;
}

// -- Setters Definitions
void Laptop::setBrand(std::string brd) {
    brand = brd;
}

void Laptop::setModel(std::string mdl) {
    model = mdl;
}

void Laptop::setYear(int yr) {
    if (yr > 2000 && yr < 2025) {
	year = yr;
    } else {
	std::cout << "Invalid year!" << std::endl;
    } 
}

void Laptop::setPrice(double pr) {
    if (pr > 0) {
	price = pr;
    } else {
	std::cout << "Invalid price!" << std::endl;
    }
}

void Laptop::setRamGB(int ram) {
    if (ram > 0) {
	ramGB = ram;
    } else {
	std::cout << "Invalid RAM!" <<std::endl;
    }
}

