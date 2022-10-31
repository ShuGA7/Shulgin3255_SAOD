#include <iostream>
#include "Str.h"
using namespace std;

int main()
{
	Str s = "123456789";
	cout << s << endl;
	Str t = "567";
	cout << s.rfind(t, 4) << endl;
}


