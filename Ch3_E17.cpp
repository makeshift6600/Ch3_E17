/* 
File name: Ch3_E17.cpp
Programmer: Jamen Cannady
Date: 09/27
Requirments: present two random numbers and then pause before displaying the total
 
 
*/
#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(0));
    int Num1 = rand() % 10001;
    int Num2 = rand() % 10001;
   
    int Total = (Num1 + Num2);
    cout << "Add " << Num1 << " and " << Num2 << endl;
    cout << "Press enter to see the answer";
    cin.get();

    cout << Total;
}