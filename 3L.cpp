#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, x, x_n, x_k, dx, f;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    cout << "Введите значение X_нач: ";
    cin >> x_n;
    cout << "Введите значение X_кон: ";
    cin >> x_k;
    cout << "Введите значение dX: ";
    cin >> dx;
    cout << "\n";

    for (double i = x_n; i <= x_k; i = i + dx)
    {
        x = i;
        if (x-a<0 && c != 0) f = a - x / (10 + b);
        else if (x-a>0 && c == 0) f = (x - a) / (x - c);
        else f = 3*x + 2/c;

        if (((trunc(a) || trunc(b)) && trunc(c)) == 0)
        {
            f = trunc(f);
        }

        cout << x << "   " << f << "\n";
    }
}