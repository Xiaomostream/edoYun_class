// class21.5 预定义宏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int ave(int a, int b)
{
    std::cout << __func__ << '\n'; 
    std::cout << __FUNCTION__ << '\n'; //函数名称，不含修饰名
    std::cout << __FUNCDNAME__ << '\n';//函数名称，不含修饰名
    std::cout << __FUNCSIG__ << '\n';//函数名称，并且包含了函数签名 输出：int __cdecl ave(int, int)
    
    return (a + b) / 2;
}
int main()
{
    std::cout << __DATE__ << '\n'; //源文件的编译日期
    std::cout << __TIME__ << '\n'; //当前转换单元的转换时间（最近一次修改编译的时间）
    std::cout << __func__ << '\n'; //源文件的名称
    std::cout << __FILE__ << '\n'; //当前的行号
    std::cout << __cplusplus << '\n'; //当转换单元为c++时,__cplusplus为一个整数文本，否则为未定义
    ave(3, 5);
#ifdef _CHAR_UNSIGNED //如果char类型为无符号，该宏定义为1，否则为无定义
    std::cout << "char unsigned";
#else
#endif
    __COUNTER__; //从0开始，每次使用都会递增1
    std::cout << __COUNTER__ << '\n';
    std::cout << __COUNTER__ << '\n';
    std::cout << __COUNTER__ << '\n';
#ifdef _DEBUG //调试模式
    std::cout << "DEBUGing\n";
#endif
#ifdef _Win64
    std::cout << "WIN64!\n";
#endif
#ifdef _Win32
    std::cout << "WIN32!\n";
#endif
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
