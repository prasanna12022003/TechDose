#include <iostream>
using namespace std;

int main() 
{
    int exp;
    float base, res = 1;
    cin >> base >> exp;
    while (exp != 0) {
        res *= base;
        --exponent;
    }
    cout << res;
    return 0;
}