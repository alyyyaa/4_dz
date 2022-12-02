//Найдите целые числа из промежутка [A,B],которые при возведении в квадрат дают палиндром
#include<iostream>
using namespace std;

int pal(int n)
{
	int x = n;
	int reverse = 0;
	while (x)
	{
		reverse = reverse * 10 + x % 10;
		x /= 10;
	}
	return (n == reverse);
}
int main()
{
	int a, b;
	cout << "Введите промежуток: ";
	cin >> a >> b;
	for (a; a <= b; a++)
	{
		if (pal(a * a))
			cout << a << endl;
	}
}