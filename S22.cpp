#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");
    int number;
    int counter = 1;
    
    while (file >> number) {
        cout << counter << ". " << number << endl;
        counter++;
    }
    
    file.close();
    return 0;
}
