#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double R;
    double x;
    double y;
    cout << "Введите R: ";
    cin >> R;
    cout << "\n";
    cout << "Введите координаты точки: \n";
    cin >> x;
    cin >> y;

    if (((((x <= 0) && (y <= 0)) || ((x >= 0) && (y >= 0))) &&
        (pow(x, 2) + pow(y, 2) <= pow(R, 2))) || (x < 0 && y > 0 && (abs(x) + abs(y) <= R)))
    {
        cout << "Точка (" << x << ";" << y << ") находится в заданной области";
    }
    else
    {
        cout << "Точка (" << x << ";" << y << ") не находится в заданной области";
    }
}
