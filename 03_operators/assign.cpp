#include<iostream>
using namespace std;

int main(){
    
    int tea_bags;
    cout << "Enter the number of tea bags: ";
    cin >> tea_bags;

    if(tea_bags < 10){
        tea_bags += 5;
        cout << "New number of tea bags: " << tea_bags << endl;
    }
    else{
        cout << "You got " << tea_bags << " of tea bags " << endl;
    }
    return 0;
}