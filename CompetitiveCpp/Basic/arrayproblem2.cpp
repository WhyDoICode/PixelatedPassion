/*

Write a C++ program that initializes an array of integers with 10
 random values between 1 and 100, and then uses a loop to print out the
  values and their corresponding indices (i.e., their position in the array).


*/

#include <iostream>

using namespace std;


int main() {
    int arr[10];

    for (int i = 0; i < 10; ++i)
    {
        arr[i] = rand() % 100 + 1;
        cout << "Number: " << arr[i] << " Location: " << i << endl;
        /* code */
    }
    return 0;
}