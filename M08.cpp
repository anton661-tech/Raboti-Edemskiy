#include <iostream>
#include <cmath>
using namespace std;

double get_angle(double a, double b, double c) {
    // Проверка сторон
    if (a <= 0 || b <= 0 || c <= 0) return -1;
    if (a >= b + c || b >= a + c || c >= a + b) return -1;
    
    // Теорема косинусов
    double cosA = (b*b + c*c - a*a) / (2*b*c);
    
    // Вычисляем угол в градусах
    return acos(cosA) * 180.0 / 3.14159265;
}

int main() {
    cout << get_angle(5., 4., 3.) << endl; // 90
    return 0;
}
