#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	int flag = 0;
	double* nums;
	nums = new double[argc + 2];
	bool forward = true;
	int l = 0;
	for (int j = 0; j < argc; j++)
	{
		if (*argv[j] == 'f')
			forward = true;
		else if (*argv[j] == 'b')
			forward = false;
	}
			l = 0;
			for (size_t j = 0; j < argc; j++)
			{
				if (isdigit(*argv[j]))
				{
					nums[l] = std::stoi(argv[j]);
					l++;
				}
			}

	if (forward)
	{
			double temp;
			for (int p = 0; p < l - 1; p++)
			{
				for (int j = 0; j < l - p - 1; j++)
				{
					if (nums[j] > nums[j + 1])
					{
						temp = nums[j];
						nums[j] = nums[j + 1];
						nums[j + 1] = temp;
					}
				}
			}
	}
	else
	{
			double temp;
			for (int i = 0; i < l - 1; i++)
			{
				for (int j = 0; j < l - i - 1; j++)
				{
					if (nums[j] < nums[j + 1])
					{
						temp = nums[j];
						nums[j] = nums[j + 1];
						nums[j + 1] = temp;
					}
				}
			}
	}
	for (int i = 0; i < l; i++)
	{
		cout << nums[i] << endl;
	}
	delete [] nums;
}
