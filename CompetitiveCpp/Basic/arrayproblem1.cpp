/*

Write a C++ program that initializes an array of integers with 
values from 1 to 10, and then uses a loop to print out the values in reverse order.

*/

#include <iostream>

using namespace std;


int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << endl;
        /* code */
    }
    return 0;
}