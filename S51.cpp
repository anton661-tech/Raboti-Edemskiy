#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[]) {
    int length = strlen(str);
    
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    char text[100] = "Testing";
    reverse(text);
    return 0;
}
