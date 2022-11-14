#include <iostream>
#include "PF.h"
using namespace std;
int main()
{
    PF pf = PF();
    pf.Init("rakaratrakarakarakatakarakara");
    int len = pf;
    for (int i = 0; i < len; i++)
        cout << pf[i];
    cout << '\n';
    cout << "length " << len << endl;
    cout << "cmp " << pf.CmpCount() << endl;

    
}


