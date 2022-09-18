// pointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "utils.h"
using namespace std;
//void Swap(int *pa, int *pb)
//{
    //int t = 0;
    //t = *pa;
    //*pa = *pb;
    //*pb = t;
//}


int main()
{
    int x = 3;
    int* p = &x;
    //cout << x << ' ' << *p << ' ' << p << endl;
    //p++; 
    //cout << p << endl;
    //cout << p - &x << endl;

    //typedef unsigned char byte;
    //byte* pe = (byte*)--p;
    //for (byte* pt = pe; pt - pe < sizeof(int); pt++)
        //cout << (int)*pt << ' ';
    //cout << endl;

    int a = 3, b = 5;
    int *pa = &a;
    int *pb = &b;
    Swap(pa, pb);
    cout << a;
    cout << b;
}

