#include <iostream>
#include "Test.h"
Test glb = Test();
int main()
{
	Test a = Test();
	Test b = Test();
	Test c = Test();
	Test* p = new Test;
	Test* pc = new Test[3]{ };
	Test d = a;
	delete p;
	delete[] pc;
	Child ch = Child();
	Aggregate ag1 = Aggregate(a); 
	AggregateT<Test> ag2 = AggregateT<Test>{ a };
}

