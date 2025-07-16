#include <iostream>
#include <string>

class Laptop {
public: // Function members

    //-- Constructors
    Laptop(std::string brd, std::string mdl, int yr, double pr, int ram);

    //-- Getters
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    int getRamGB() const;

    //-- Output
    void display() const;

    //-- Setters
    void setBrand(std::string brd);
    void setModel(std::string mdl);
    void setYear(int yr);
    void setPrice(double pr);
    void setRamGB(int ram);

private: // Data members
    std::string brand;
    std::string model;
    int year;
    double price;
    int ramGB;

};
