#include <iostream>
using namespace std;

int main() {
    string names[10] = {"ноль", "один", "два", "три", "четыре", 
                        "пять", "шесть", "семь", "восемь", "девять"};
    
    int number;
    cin >> number;
    
    if (number >= 0 && number <= 9) {
        cout << names[number] << endl;
    } else {
        cout << "Число должно быть от 0 до 9" << endl;
    }
    
    return 0;
}
