#include <iostream>
#include "t.h"
extern const int pt = 1000+5;
static int x = 350;
static void test()
{
	std::cout << a << "+" << x << '\n';
}
inline void p() {
	std::cout << "2p\n";
}
void TestX()
{
	std::cout << "引用1.cpp下的testX\n";
}
