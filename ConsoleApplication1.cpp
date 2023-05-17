#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите переменную а \n ";
	cin >> a;
	std::cout << "вывод: \n ";
	double z1 = 1 - (double(1) / double(4)) * pow(sin(2 * a), 2) + cos(2 * a);
	double z2=pow(cos(a),2)+pow(cos(a),4);
	std::cout << "a=" << a << "\n z1=" << z1 << "\n z2 = " << z2;
}