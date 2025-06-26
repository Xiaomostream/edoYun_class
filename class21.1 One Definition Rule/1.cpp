#include <iostream>
const int a = 350;
extern const int pt = 1000+5;
int x = 350;
void test() 
{
	std::cout << "Test!";
}
inline void p() {
	std::cout << "2p\n";
}
void TestX()
{
	std::cout << "引用1.cpp下的testX\n";
}
