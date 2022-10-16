#include "Test.h"
int Test::nCount = 0;
int t;

Test::Test()
{
	t = 1;
	nCount++;
	std::cout << "Constructor" << "NCount = "<< nCount << std::endl;
}
Test::~Test()
{
	nCount--;
	std::cout << "Destructor" << "NCount = " << nCount << std::endl;
}
Test::Test(const Test& s) 
{
	nCount++;
	t = s.t;
	std::cout << "foo" << "NCount = " << nCount << std::endl;
}

Child::Child()
{
	std::cout << "Child Constructor" << std::endl;
}
Child::~Child()
{
	std::cout << "Child Destructor" << std::endl;
}
Aggregate::Aggregate(Test m_objTest)
{
	std::cout << "Aggregate Constructor" << std::endl;
}
Aggregate::~Aggregate()
{
	std::cout << "Aggregate Destructor" << std::endl;
}