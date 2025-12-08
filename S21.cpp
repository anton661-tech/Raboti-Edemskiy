#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    ofstream file("output.txt");
    
    for (int i = A; i <= B; i++) {
        file << i * 3 << endl;
    }
    
    file.close();
    return 0;
}
