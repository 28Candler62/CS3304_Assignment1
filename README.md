# CS3304_Assignment1
CS 3304 – Data and Information Structures Assignment 1

CS 3304 – Data and Information Structures
Assignment 1
Due: 07/16/2025, 23:59
Submission: Submit your solutions as a single .zip file through Canvas. The .zip file will contain
- Q12.cpp file including the functions for the Questions 1 and 2, with a main() that tests them
using the given examples.
- Laptop.cpp and Laptop.h files for the Question 3. LaptopDriver.cpp file should contain the
main function, where Laptop objects are created and their methods are called. You can use the
given example driver class.
Q1 (25 pts). Write a C++ function named countAtLeastTwice that accepts an integer array and
its size, and returns the number of distinct elements that appear at least twice. Use only basic
arrays and loops—do not use STL containers or algorithms. For instance, running the following
code in the main function should print 2 and 2.
int a[] = {1, 2, 3, 2, 4, 1, 5, 6, 1}; // 1 appears 3 times, 2 appears 2 times
int b[] = {7, 8, 7, 9, 10, 8, 8}; // 7 and 8 appear ≥ 2 times
cout << countAtLeastTwice(a, 9) << endl;
cout << countAtLeastTwice(b, 7) << endl;
Q2 (25 pts). Write a C++ template function named interleaveArrays that accepts two generic
arrays and their sizes, and returns a new dynamically allocated array with elements interleaved.
If the arrays are of unequal lengths, append the remaining elements of the longer array at the
end. For instance, running the following code in the main function should print "1 2 3 4 5 6 8
10".
int a[] = {1, 3, 5};
int b[] = {2, 4, 6, 8, 10};
int* result = interleaveArrays(a, 3, b, 5);
for (int i = 0; i < 8; i++) {
cout << result[i] << " ";
}
Q3 (50 pts). Write a Laptop class with five data members:
• brand (string)
• model (string)
• year (int)
• price (double)
• ramGB (int)
You should have header file (Laptop.h) for declarations, and implementation file (Laptop.cpp)
for implementing functions.
Include the following functions in the class.
a. (10 pts) Define an explicit-value constructor that takes five parameters and sets the
values of the data members. Add validation:
If year < 2000 or > 2025, set to 2025 and print:
"Invalid year! Setting year to 2025."
If price or ramGB is negative, set to 500 (price) or 8 (RAM) and print:
"Invalid price! Setting price to $500."
"Invalid RAM! Setting RAM to 8 GB."
b. (15 pts) Write getters for all data members such as getBrand, getModel, getYear,
getPrice, and getRamGB.
c. (15 pts) Write setters for all data members such as setBrand, setModel, setYear,
setPrice, and setRamGB. If the parameter of setPrice or setRamGB is not positive, do
not modify the price or ramGB and print an error message. If parameter of setYear is
less than 2000 or greater than 2025, print an error message and do not modify the year.
d. (10 pts) Write a function named display that prints all laptop information in the
following format:
Example Output:
Brand: Dell, Model: XPS 13, Year: 2022, Price: $999.99, RAM: 16 GB
