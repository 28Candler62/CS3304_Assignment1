/* John Candler
 * CS3304 Assignment 1
 *
 * https://github.com/28Candler62/CS3304_Assignment1
 * Compiler command:
 * g++ -Wall -g Q12.cpp -o Q12 && Q12.exe
*/



/*
Q12.cpp file including the functions for the Questions 1 and 2, with a main() that tests them
using the given examples.

Q1 (25 pts).
Write a C++ function named countAtLeastTwice that accepts an integer array and
its size, and returns the number of distinct elements that appear at least twice. Use only basic
arrays and loops—do not use STL containers or algorithms. For instance, running the following
code in the main function should print 2 and 2.

int a[] = {1, 2, 3, 2, 4, 1, 5, 6, 1}; // 1 appears 3 times, 2 appears 2 times
int b[] = {7, 8, 7, 9, 10, 8, 8}; // 7 and 8 appear ≥ 2 times
cout << countAtLeastTwice(a, 9) << endl;
cout << countAtLeastTwice(b, 7) << endl;

Q2 (25 pts).
Write a C++ template function named interleaveArrays that accepts two generic
arrays and their sizes, and returns a new dynamically allocated array with elements interleaved.
If the arrays are of unequal lengths, append the remaining elements of the longer array at the
end. For instance, running the following code in the main function should print "1 2 3 4 5 6 8 10".

int a[] = {1, 3, 5};
int b[] = {2, 4, 6, 8, 10};
int* result = interleaveArrays(a, 3, b, 5);
for (int i = 0; i < 8; i++) {
cout << result[i] << " ";
}
*/

#include <iostream>

int countAtLeastTwice(int countA[], int sizeA) {
    int indexfound = 0;
    int found[sizeA];
    for (int i = 0; i < sizeA - 1; i++) {
        bool infound = false;
	for (int k = 0; k < indexfound; k++) {
	    if (countA[i] == found[k])
		infound = true;
	}
	for (int j = i + 1; j < sizeA; j++) {
	    if (countA[i] == countA[j] && infound == false) {
		found[indexfound] = countA[i];
		indexfound += 1;
		break;
	    }
	}
    }
    return indexfound;
};

template <typename T>
int* interleaveArrays(T a1[], int a1size, T a2[], int a2size) {
    int* aPtr;
    aPtr = new T[a1size + a2size];
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < a1size + a2size; i++) {
	if (i % 2 == 0 && index1 != a1size) {
	    *(aPtr + i) = a1[index1];
	    index1 += 1;
	} else if (i % 2 == 1 && index2 != a2size) {
            *(aPtr + i) = a2[index2];
	    index2 += 1;
	} else if (index1 == a1size) {
            *(aPtr + i) = a2[index2];
	    index2 += 1;
	} else if (index2 == a2size) {
            *(aPtr + i) = a1[index1];
	    index1 += 1;
	}
    }
    return aPtr;
}

int main(){
    int a[] = {1, 2, 3, 2, 4, 1, 5, 6, 1};
    int b[] = {7, 8, 7, 9, 10, 8, 8};
    int c[] = {1, 3, 5};
    int d[] = {2, 4, 6, 8, 10};


    std::cout << countAtLeastTwice(a, 9)<< std::endl;
    std::cout << countAtLeastTwice(b, 7)<< std::endl;

    int* result = interleaveArrays(c, 3, d, 5);
    for (int i = 0; i < 8; i++) {
        std::cout << result[i] << " ";
    }
    delete [] result;
    return 0;
}
