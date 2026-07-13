#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Default Constructor

    Chai(){
        teaName = "Unknow Tea";
        servings = 1;
        ingredients = {"Water", "Tea leaves"};
        cout << "constructor called" << endl;
    }

        void diplayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }
};

int main(){

    Chai defaultChai;
    defaultChai.diplayChaiDetails();

    return 0;
}