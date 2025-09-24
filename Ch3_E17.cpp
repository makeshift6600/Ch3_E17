/* 
File name: Ch3_E17.cpp
Programmer: Jamen Cannady
Date: 09/27
Requirments: present two random numbers and then pause before displaying the total
 
 
*/
#include <iostream>
#include <random>
using namespace std;

int main() { //for rand function use test branch
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 1000);
    int Num1 = dist(gen);
    int Num2 = dist(gen);
    int Total = (Num1 + Num2);
    cout << "Add " << Num1 << " and " << Num2 << endl;
    cout << "Press enter to see the answer";
    cin.get();

    cout << Total;
