#include <iostream>

using namespace std;

class MyClass {
public:
  MyClass(int x, int y): a(x), b(y) {
    // 构造函数内部的语句
    a = 11;
    b = 22;
    cout << "构造函数内部的语句" << endl;
  }
public:
  int a;
  int b;
};

int main() {
  MyClass obj(1, 2);
  cout << obj.a << " " << obj.b << endl;
  return 0;
}