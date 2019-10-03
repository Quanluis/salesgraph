#include <iostream>
#include <vector>
#include <fstream>
using namespace std; 

int main() {

    ifstream file ("C:\\Users\\Luis\\Desktop\\projects\\salesgraph\\sales.txt");

    std::vector<std::string> names;

    string input;

    while(file >> input){
        names.push_back(input);
    }
    for(string name : names){
        cout << name << endl;
    }

   system("pause");

    return 0;

}