//Умножение чисел в одной системе счисления, при умножении допускается переводить числа в 10-ю систему
#include <iostream>
#include <cmath>
using namespace std;
int Multiplication(int x, int y, int p)
{
	int i = 0;
	int result = 0;
	while (x > 0)
	{
		result += x % 10 * pow(p, i++);
		x /= 10;
	}
	int k = 0;
	int result2 = 0;
	while (y > 0)
	{
		result2 += y % 10 * pow(p, k++);
		y /= 10;
	}
	return result * result2;
}
int main()
{
	int x, y, p;
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число";
	cin >> y;
	cout << "Введите основание от 2 до 9: ";
	cin >> p;
	cout << Multiplication(x, y, p);
}