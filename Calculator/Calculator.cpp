#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	float temp = 0;
	int flag = 0;
	for (size_t i = 0; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			if (flag == 0)
				temp = std::stoi(argv[i]);
			else if (flag == 1)
			{
				temp += std::stoi(argv[i]);
				flag = 0;
				std::cout << temp << '\n';
			}
			else if (flag == 2)
			{
				temp -= std::stoi(argv[i]);
				flag = 0;
				std::cout << temp << '\n';
			}
			else if (flag == 3)
			{
				temp /= std::stoi(argv[i]);
				flag = 0;
				std::cout << temp << '\n';
			}
		}
		if (!isdigit(*argv[i]))
		{
			if (*argv[i] == '+')
				flag = 1;
			else if (*argv[i] == '-')
				flag = 2;
			else if (*argv[i] == '/')
				flag = 3;
		}
	}
}


