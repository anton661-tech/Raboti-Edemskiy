#include <iostream>
using namespace std;

int main() {
    cout << "Таблица Пифагора (10x10):" << endl;
    cout << "--------------------------" << endl;
    
    // Выводим заголовок
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << endl;
    
    // Выводим таблицу
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";  // Номер строки
        
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";  // Произведение
        }
        
        cout << endl;
    }
    
    return 0;
}
