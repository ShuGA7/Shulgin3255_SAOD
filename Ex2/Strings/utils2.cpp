void string_copy(char* d, char* s)
{
	char* pd = d;
	char* ps = s;
	for (int i = 0; i <= 30; i++)
	{
		*(ps + i) = *(pd + i);
	}
}