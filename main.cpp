
#include <iostream>
using namespace std;
class Calculator {
public:
    void setOPS(int a, int b);
    void Swap();
    int getOP1();
    int getOP2();
    int Sum();
    float Divide();
private:
    int OP1, OP2;
};
void Calculator::setOPS(int a, int b) {
    OP1 = a;
    OP2 = b;
}
int Calculator::getOP1() {
    return OP1;
}
int Calculator::getOP2() {
    return OP2;
}
int Calculator::Sum() {
    return OP1 + OP2;
}
float Calculator::Divide() {
    return float(OP1)/float(OP2);
}
void Calculator::Swap() {
    int temp = OP1;
    OP1 = OP2;
    OP2 = temp;
}
int main()
{
    Calculator x;
    int e, f;
    cin >> e >> f;
    x.setOPS(e, f);
    if (x.getOP1() > x.getOP2()) {
        x.Swap();
    }
    cout << x.getOP1() << endl << x.getOP2() << endl;
    cout << "Sum = " << x.Sum() << endl;
    cout << "Ratio = " << x.Divide() << endl;
    x.setOPS(1, 2);
    // use any loop statement to generate and print the Fibonacci sequence
    // till the last number is bigger than 20.
    //
    // tip: the Fibonacci sequence is 1, 2, 3, 5, 8, 13, ....
    // basically, the next number equals the sum of the previous two numbers
    // the first two numbers are always 1 and 2
    cout << x.getOP1() << ',';
    cout << x.getOP2() << ',';
    while (x.Sum() <= 20) {
        cout << x.Sum() << ',';
        x.setOPS(x.getOP2(), x.Sum());
    }    return 0;
}

