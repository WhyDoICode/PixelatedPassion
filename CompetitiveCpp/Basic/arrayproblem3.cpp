/*
Write a C++ program that takes an array of integers as input and finds the largest
 and smallest values in the array. The program should then print out the largest and smallest values.

*/


#include <iostream>

using namespace std;


int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int myArray[n];
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> myArray[i];
    }

    int smallest = myArray[0];
    int largest = myArray[0];
    for (int i = 1; i < n; i++) {
        if (myArray[i] < smallest) {
            smallest = myArray[i];
        }
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }

    std::cout << "Smallest value: " << smallest << std::endl;
    std::cout << "Largest value: " << largest << std::endl;

    return 0;
}