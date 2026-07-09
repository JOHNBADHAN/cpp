// Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

#include<iostream>
#include<string>
using namespace std;

int main(){
    int cups;
    cout << "Enter thr number of cups: ";
    cin >> cups;

    for(int i = 1; i <= cups; i++){
        cout << "Brewing cup " << i << " of tea" << endl;
    }
    return 0;
}