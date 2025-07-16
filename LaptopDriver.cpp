/* John Candler
 * CS3304 Assignment 1
 *
 * https://github.com/28Candler62/CS3304_Assignment1
 * Compiler command:
 * see makfile
 *
 * ## LaptopDriver.cpp ##
*/


#include <iostream>
#include <string>
#include "Laptop.h"

using namespace std;

int main()
{
    // Creating laptop objects
    Laptop l1("Dell", "XPS 13", 2022, 999.99, 16);
    Laptop l2("HP", "Envy", 2012, 450, -8); // Invalid ram
    Laptop l3("Lenovo", "ThinkPad", 2023, -250, 12); // Invalid price
    Laptop l4("Microsoft", "Surface", 2026, 1750, 32); // Invalid year
    
    // Displaying laptop information
    cout << "\nLaptop Details:\n";
    l1.display();
    l2.display();
    l3.display();
    l4.display();
    
    // Testing setter functions
    l1.setModel("XPS 11");
    l1.setYear(2019);
    l1.setPrice(-1000); // Invalid price
    l1.setRamGB(24);
    cout << "\nUpdated Laptop Details:\n";
    l1.display();
}
