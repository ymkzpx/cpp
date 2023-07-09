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
    B *b = static_cast<B*>(a);
    b->print();
    return 0;
}
