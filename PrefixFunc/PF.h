#pragma once
#include <string>
#include <string.h>
class PF
{
public:
	//char* s;
	int n;
	//int* pv;
	//char* str;
	int* pref;
	int sr;
	//PF()
	//{
	//}
	~PF()
	{
		delete[] pref;
	};
	//};
	void Init(const char* s)
	{
		delete[] pref;
		sr = 0;
		n = strlen(s);
		//str = new char[n + 1];
		pref = new int[n + 1];
		//strcpy_s(str, n + 1, s);

		int k = 0; 
		pref[0] = 0;
		for (int i = 1; i < n; i++)
		{
			if (s[k] != s[i])
			{
				sr++;
				if (s[0] != s[i]) k = 0;
				else k = 1;
			}
			else
			{
				sr++;
				k++; 
			}
			pref[i] = k; 
		}
	}

	int CmpCount()
	{
		return sr;
	}

	operator int() const
	{
		return n;
	}
	int operator [] (int i) const
	{
		return pref[i];
	}
};


