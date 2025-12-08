#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double get_square(double A, int N) {
    // Формула площади правильного N-угольника: (N * A^2) / (4 * tan(π/N))
    if (N < 3) {
        cout << "Ошибка: у многоугольника должно быть не менее 3 сторон!" << endl;
        return 0;
    }
    
    // Вычисляем площадь
    double square = (N * A * A) / (4 * tan(PI / N));
    return square;
}

int main() {
    // Тестируем функцию
    double side = 1.0;
    
    cout << "Площади правильных многоугольников со стороной " << side << ":" << endl;
    cout << "Треугольник (3 стороны): " << get_square(side, 3) << endl;
    cout << "Квадрат (4 стороны): " << get_square(side, 4) << endl;
    cout << "Пятиугольник (5 сторон): " << get_square(side, 5) << endl;
    cout << "Шестиугольник (6 сторон): " << get_square(side, 6) << endl;
    cout << "Восьмиугольник (8 сторон): " << get_square(side, 8) << endl;
    
    return 0;
}
