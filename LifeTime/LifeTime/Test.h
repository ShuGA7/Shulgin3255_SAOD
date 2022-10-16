#pragma once
#include <iostream>;
using namespace std;
//extern Test kek;
class Test
{
public:
	static int nCount;
	int t;
	Test();
	~Test();
	Test(const Test& s);
};

class Child : public Test
{
	public:
		Child();
		~Child();
};
class Aggregate
{
	public:
		Aggregate(Test m_objTest);
		~Aggregate();
};
template <typename T> class AggregateT
{
public:
	AggregateT(Test m_objTest);
	~AggregateT();
};
template <typename T> AggregateT<T>::AggregateT(Test m_objTest)
{
	std::cout << "AggregateT Constructor. " << std::endl;
}
template <typename T> AggregateT<T>::~AggregateT()
{
	std::cout << "AggregateT Destructor. " << std::endl;

}
