//Дано целое число N и набор из N целых чисел. Найти общее количество экстремальных элементов из данного набора.
#include<iostream>
using namespace std;

void main()
{
    int n, num, max_el = 0, min_el = 0, min = 9999999, max = -9999999;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (max < num)
        {
            max_el = 1;
            max = num;
        }
        else
        {
            if (max == num)
            {
                max_el += 1;
            }
        }
        if (min > num)
        {
            min = num;
            min_el = 1;
        }
        else
        {
            if (min == num)
            {
                min_el += 1;
            }
        }
    }
    if (min_el == max_el)
    {
        cout << min_el;
    }
    else
    {
        cout << min_el + max_el;
    }
}