#include<iostream>
//#define _DBG_for 

int ave(int a, int b)
{
	return a + b;
}

//我们编写好程序以后，可能会存在一些bug和错误，对于语法上的错误，编
//译器能够直接给出提示，而对于逻辑上的错误。编译器不能够直接发现；
//调试就是一个找错误和改错误的过程？这个方便调试，在编码风格上有几点
//小建议给大家
//1.模块儿化。
//2.使用能够体现出具体意义的函数名和变量名，
//3.使用正确的缩进和代码块
//4.四良好的注释习惯。

int main()
{
	// pass;
	int studentID[3][4]
	{
		{1001,1002,1003},
		{2001,2002,2003},
		{3001,3002,3003},
	};
	int b{};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//ave(b, b++);
			b++;
#ifdef _DBG_for
			std::cout << b << '\n';
#endif
			printf("%d 班 第 %d 个学生编号为 %d\n", i+1, b, studentID[i][j]);
		}
	}
	return 0;
}