// arrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void rotate(int *a, int *n, bool clockwise)
{
	int x = a[0];
	if (clockwise == false)
	{
		for (int i = 1; i < *n; i++)
			a[i - 1] = a[i];
		a[*n - 1] = x;
	}
	else
	{
		for (int i = 0; i < *n-1; i++)
			a[i] = a[i+1];
		a[*n - 1] = x;
	}
}
int main()
{
	int a[5]{ 1,2,3,4,5 };
	//for (int i = 0; i < 5; i++)
		//cout << a[i] << ' ';
	//cout << endl;

	//for (int* p = a; p - a < 5; p++)
	//{
		//cout << *p << ' ';
	//}
	//cout << endl;

	int n = 5;
	int* np = &n;
	rotate(a, np, true);
	for (int* p = a; p - a < 5; p++)
	{
		cout << *p << ' ';
	}
	cout << endl;
}


