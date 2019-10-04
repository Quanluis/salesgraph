//Luis Garzon
//COP2000.0M2
//Program takes file info of sales then displays a certain number of stars based on thousand sales
//rounded to the nearest 1000
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std; 

int main() {

    ifstream inputFile;
    string name;

    //Opens text files

    inputFile.open("sales.txt");

    //Program info

    cout << "Today's Sales Chart" << endl << endl;
    cout << "Gathering input from file..." << endl << endl;
    cout << "Daily Sales (each * = $1000)" << endl << endl;

    //If file is not found run this cout statement
    //else run program
        
    if(!inputFile){
        cout << "File not found!!!" << endl;

    } else {

        // For loop executes until condition is met. 

        for(int count = 1; count <=3; count++ ){

        // Variables
    
        double num1, result;

        inputFile >> name;

        // Convert string to int, store in variable

        num1 = stoi(name);

        // Stores results in int variable

        result = num1 / 1000;

        // Displays store number

        cout << "Store " << count << ":" << endl <<endl;

        // For loop that prints stars until condition is met

        for(int star = 1; star <= result; star++ ){
            cout << "*";
        } 
            cout << " ";
        // Display results with number of asterisk
        // Plus numerical count of how are many displayed.

        cout << lround(result) << endl << endl;
        }
    }

    // Close file and pause system

    inputFile.close();

    system("pause");

    return 0;
    
}