#include <iostream>
using namespace std;

class Base
{
    virtual void dummy() {}
};
class Derived : public Base
{
};

int main()
{   
    // pointer dynamic_cast error example
    Base *basePtr = new Base();
    Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
    if (derivedPtr == nullptr)
    {
        std::cout << "指针转换失败, derivedPtr 为空指针" << std::endl;
    }

    // reference dynamic_cast error example
    Base a;
    Base &baseRef = a;
    try {
        Derived &derivedRef = dynamic_cast<Derived &>(baseRef);
    }
    catch (const std::bad_cast &e)
    {
        std::cout << "引用转换失败，抛出 std::bad_cast 异常" << std::endl;
    }
}
