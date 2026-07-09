// Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

#include<iostream>
#include<string>
using namespace std;
int main(){

    string tea_order;
    cout << "Enter your tea order: ";
    getline(cin,tea_order);
    
    if(tea_order == "Green Tea"){
        cout << "Your order is confirmed" << endl;
    }
    return 0;
}