#include <iostream>
using namespace std;
double x, y;

int main() {
    cout <<"Введите координаты вершины прямого угла: ";
    cin >> x >> y;
    if (x == y) {
        cout << "Треугольник не существует\n";
    }

    while (true) {
        double x2, y2;
        cout << "Введите координаты точки: ";
        cin >> x2 >> y2;
        if (x2 == 0 && y2 == 0) {
            cout << "Выход из программы\n";
            break;
        }
        if (x > y) {
            if (x2 > x || y2 < y || y2 > x2) {
                cout << "Точка не принадлежит треугольнику\n";
            } else {
                cout << "Точка принадлежит треугольнику\n";
            }
        } else {
            if (x2 < x || y2 > y || y2 < x2) {
                cout << "Точка не принадлежит треугольнику\n";
            } else {
                cout << "Точка принадлежит треугольнику\n";
            }
        }
    }
    return 0;
}