#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Input two number: " << std::endl;
    // 考虑输入大小顺序
    std::cin >> v1 >> v2;
    // 输入的是1 5这样的，则升序输出
    if (v2 >= v1)
    {
        for (; v1 <= v2; ++v1)
        {
            std::cout << v1 << " ";
        }
    }
    // 输入是5 1这样的，降序输出
    else
    {
        for (; v1 >= v2; --v1)
        {
            std::cout << v1 << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}