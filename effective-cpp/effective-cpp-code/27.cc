#include <iostream>
using namespace std;

// 需要非常量参数
// void doSomething(int *n)
// {
//     // ...
//     cout << n << endl;
//     *n = 11;
//     cout << *n << endl;
//     cout << &n << endl;

    
// }
// // ...
// int main()
// {
//     const int a = 22;
//     // doSomething(&a);                    // 报错，不能把const int转为int

//     cout << &a << endl;
//     doSomething(const_cast<int *>(&a)); // 正确，去掉const属性
//     cout << a << endl;
//     cout << &a << endl;

//     return 0;
// }

void doSomething(int& n)
{
    // ...
    cout << n << endl;
    n = 11;
    cout << n << endl;
}

int main()
{
    const int a = 22;
    doSomething(const_cast<int&>(a));
    cout << a << endl;

    return 0;
}
