#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[100];
    cin.getline(text, 100);
    
    char* ptr = text;
    int length = strlen(text);
    
    for (int i = 0; i < length; i++) {
        if ((text[i] >= 'a' && text[i] < 'z') || 
            (text[i] >= 'A' && text[i] < 'Z')) {
            text[i] = text[i] + 1;
        } else if (text[i] == 'z') {
            text[i] = 'a';
        } else if (text[i] == 'Z') {
            text[i] = 'A';
        }
    }
    
    cout << text << endl;
    return 0;
}
