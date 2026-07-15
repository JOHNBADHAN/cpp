#include <iostream>
using namespace std;

int linearSearch(int arr[], int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 7, 3, 8, 9, 1, 3, 5};
    int linear = linearSearch(arr, 8, 1); 

    cout << linear << endl;
    return 0;
}