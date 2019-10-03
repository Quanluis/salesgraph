#include <iostream>
#include <vector>
#include <fstream>
using namespace std; 

int main() {

    ifstream file ("sales.txt");

    std::vector<std::string> names;

    string input;

    if(!file){
        cout << "File is not found.";
    } else {
        while(file >> input)
        {
        names.push_back(input);
        }
    for(string name : names)
        {
        cout << name << endl;
        }
    }


   system("pause");

    return 0;

}