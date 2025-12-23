#include <iostream>
using namespace std;

class CreditCard {
public:
    int Number;
    float Balance;
    
    CreditCard(int num, float bal) {
        Number = num;
        Balance = bal;
    }
    
    void Put(float amount) {
        Balance += amount;
        cout << "Внесено: " << amount << endl;
    }
    
    void Take(float amount) {
        if (amount <= Balance) {
            Balance -= amount;
            cout << "Снято: " << amount << endl;
        } else {
            cout << "Недостаточно средств" << endl;
        }
    }
};

int main() {
    CreditCard firstCC(1234, 50);
    CreditCard* cardPtr = &firstCC;
    
    cardPtr->Put(100);  // -> вместо .
    cout << "Баланс: " << cardPtr->Balance << endl;
    
    return 0;
}
