/*
1.转换单元
将写好的每个源⽂件(.cpp/.c)与其包含的头⽂件“#include<xx.xh>”合并后形成的整体称为转换单元（也称翻译单元或编译单元）
在编译过程中，编译器将每个转换单元单独编译⽣成对应的对象⽂件(.obj)，
            对象⽂件包含：机器码 + 外部引⽤信息（本转换单元未定义的对象）.
在链接过程中，链接器将所有对象⽂件链接⽣成最终⽬标程序。
            若对象⽂件A中引⽤了其他转换单元定义的对象，链接器会在其他对象⽂件中查找该定义
            若所有对象⽂件中都找不到定义，则产⽣链接错误
*/

#include <iostream>
#include "t.h"
extern const int pt;
static int x = 10;
static void test()
{
    std:: cout << a << "+" << x << '\n';
}

static void Test()
{
    std::cout << "static Test\n";
}
int main()
{
    test();
    std::cout << a << '\n';
    Test();
}


