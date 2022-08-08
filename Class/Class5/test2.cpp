#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 29;
    double num2 = 987.837;

    int& n1 = num1;
    double n2 = num2;

    cout << "num1 is " << num1 << endl;
    cout << "n1 is " << n1;
    return 0;
}
