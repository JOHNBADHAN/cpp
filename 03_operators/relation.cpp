#include<iostream>
using namespace std;

int main(){

    int tea_cups;
    cout << "Enetr the number of tea cups you buy: ";
    cin >> tea_cups;

    if(tea_cups > 20){
        cout << "You get a Gold Badge";
    }
    else if(10 <= tea_cups <= 20){
        cout << "You get a Silver Badge";
    }else {
        cout << "NO BADGE for you" << endl;
    }
    return 0;
}