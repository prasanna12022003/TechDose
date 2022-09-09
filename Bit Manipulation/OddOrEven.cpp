#include <iostream>
using namespace std;

bool OddorEven(int n)            // Returns true if n is even, else odd
{
     return (!(n & 1));          // n&1 is 1, then odd, else even
}

int main()
{
    int n;
    cin>>n;
    OddorEven(n)? cout << "Even": cout << "Odd";
    return 0;
}