// Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

#include<iostream>
using namespace std;

int main(){
    int tea_cups;
    cout << "Enter the number of cups to be serve: ";
    cin >> tea_cups;

    while(tea_cups > 0){
        tea_cups --;
        cout << "Serving a cup of tea \n" << tea_cups << " remaining" << endl;    }

    cout << "All tea cups are served. " << endl;
    return 0;
}