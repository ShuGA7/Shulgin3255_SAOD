#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include "Test.h"
using namespace std;
int main()
{
    int n = 200;
    int m = 1000;
    int k = 0;
    std::vector<int> Vector;
    std::list<int> List(n);
    for (int i = 0; i < n; i++)
    {
        List.push_back(i);
    }
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < m; i++)
    {
        List.push_front(i);
        k++;
        List.erase(List.begin());
        k++;
    }
    auto stop = chrono::steady_clock::now();
    auto dt = chrono::duration_cast<chrono::microseconds>(stop - start).count();
    cout << k << endl;
    cout << dt << endl;
    int kn = 0;
    auto start2 = chrono::steady_clock::now();
    for (int i = 0; i < m; i++)
    {
        Vector.insert(Vector.begin(), i);
        kn++;
        Vector.erase(Vector.begin());
        kn++;
    }
    auto stop2 = chrono::steady_clock::now();
    auto dn = chrono::duration_cast<chrono::microseconds>(stop2 - start2).count();
    cout << kn << endl;
    cout << dn << endl;
    //shared_ptr<Test> sp(new Test[3], default_delete<Test[]>());
    unique_ptr<Test[]> sp(new Test[3]);
    sp.get()[0].val = 0;
    sp.get()[1].val = 1;
    sp.get()[2].val = 2;

    for (int i = 0; i < 3; i++)
    {
        cout << sp.get()[i].val << endl;
    }
    cout << "-----" << endl;
    sp.reset(new Test[2]);
    cout << "-----" << endl;
}


