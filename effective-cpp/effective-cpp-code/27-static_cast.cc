#include <iostream>
using namespace std;

class A {

};

class B : public A {
    public:
        void print() {
            cout << "B" << endl;
        }
};

class C {

};

int main()
{
    A *a = new A();
    C *b = static_cast<C *>(a);
    // b->print();
    return 0;
}
