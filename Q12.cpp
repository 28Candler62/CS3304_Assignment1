/*
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
