#include <iostream>
#include <fstream>
using namespace std; 

int main() {

    ifstream inputFile;
    string name;

    inputFile.open("sales.txt");

    cout << "Today's Sales Chart" << endl << endl;
    cout << "Gathering input from file..." << endl << endl;
    cout << "Daily Sales (each * = $1000)" << endl << endl;
        
    if(!inputFile){
        cout << "File not found!!!" << endl;

    } else {
        for(int count = 1; count <=3; count++ ){
    
        int num1, result;

        inputFile >> name;

        num1 = stoi(name);

        result = num1 / 1000;

        for(int star = 1; star <= result; star++ ){
            cout << "*";
        }
        cout << result << endl;
     }
    }

    inputFile.close();

    system("pause");

    return 0;

}