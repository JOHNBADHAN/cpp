#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Parameter Constructor

    Chai(string name, int serve, vector<string> ing){
        teaName = name;
        servings = serve;
        ingredients = ing;
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
    Chai lemonTea("Lemon Tea", 2, {"Water", "lemon", "Honey"});

    lemonTea.diplayChaiDetails();

    return 0;
}