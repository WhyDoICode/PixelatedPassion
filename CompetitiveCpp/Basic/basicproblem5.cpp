/*

Write a C++ program that takes two integers as input and prints their quotient and remainder.

*/


#include <iostream>

using namespace std;


int main() {
   int a,b;
   cin >> a >> b;
    cout << "Quotient: " << a/b << endl;
    cout << "Reminder: " << a%b << endl;
    
    return 0;
}