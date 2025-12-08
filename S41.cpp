#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    cout << squared_sum(12, 6) << endl;    // 324
    cout << squared_sum(12, -6) << endl;   // 36
    return 0;
}
