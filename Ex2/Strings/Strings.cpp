#include <iostream>
#include "Header.h";
using namespace std;

int len(const char* s)
{
	int p = 0;
	while (s[p])
		p++;;
	return p;
}

int compare(const char* s, const char* t)
{
	return len(s) - len(t);
}

int main()
{
	int k = 0;
	char str[] = "Hello!!";
	char str2[] = "Hello!";
	char t[32];
	string_copy(str, t);
	cout << t << endl;
	cout << len(str) << endl;
	cout << compare(str, str2);
}


