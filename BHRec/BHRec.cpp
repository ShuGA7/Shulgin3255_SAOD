#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include "BinaryHeap.h";
#include "BinaryHeapOpt.h";
#include <Windows.h>;
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	//std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//BinaryHeap bh = BinaryHeap(v, 10);
	//int p = bh;
	//cout << p << endl;
	//for (int i = 0; i < 10; i++)
		//cout << bh[i] << " ";
	int m = 5;
	int n = 300;
	int k = 0;
	std::vector<int> v(n);
	int ch;
	for (int i = 0; i < n; i++)
	{
		ch = rand() % n;
		v.insert(v.begin(), ch);
	}
	LARGE_INTEGER li1, li2, lif;
	::QueryPerformanceFrequency(&lif);
	::QueryPerformanceCounter(&li1);
	for (int i = 0; i < m; i++)
	{
		BinaryHeapOpt* bh = new BinaryHeapOpt(v, n);
		k += (*(bh)).heap[0];
		delete bh;
	}
	::QueryPerformanceCounter(&li2);
	int mcSec = (int)((double)((li2.QuadPart - li1.QuadPart) * 1000000) / (double)lif.QuadPart);
	cout << mcSec << endl;
	cout << k;
}


