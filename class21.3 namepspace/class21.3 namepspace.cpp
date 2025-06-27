// class21.3 namepspace.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "htd.h"
void test();
const int p = 2020;
int htd::height{ 250 };
void htd::test() //定义htd::test
{
    std::cout << htd::height << '\n';
}
void htd::hack::hack() //定义嵌套htd::hack::hack()
{
    std::cout << "hack\n";
}
namespace //未命名的命名空间：解决两个转换单元 void Thack互不干涉，避免使用 static void THack.解决可以在本转换单元使用Thack
{
    void THack()
    {
        std::cout << "THack\n";
    }
}
//namespace htd
//{
//    int height{ 250 };
//}
namespace t //命名空间的定义
{
    int value{250};
}
namespace t //命名空间的扩展
{
    int height{ 1280 };
}
int main()
{
    THack();
    int p = 2023;
    htd::test();
    htd::hack::hack();

    /*std::cout << htd::height << '\n';*/
    std::cout << p << ' ' << ::p << '\n'; //::表示全局命名空间
    t::value = 255;
    std::cout << t::value;
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
