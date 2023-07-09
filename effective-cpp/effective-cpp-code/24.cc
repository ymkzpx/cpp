
#include <iostream>
using namespace std;

class Rational
{
public:
    Rational(int num) : num_(num) {}
    // const Rational operator*(const Rational &rhs) const {
    //     return Rational(num_ * rhs.num_);
    // }
    int num_;
};

// non-member函数
const Rational operator*(const Rational &lhs, const Rational &rhs) {}

int main()
{
    Rational oneHalf(2);
    Rational result = oneHalf * 2;
    result = 2 * oneHalf;
    return 0;
}