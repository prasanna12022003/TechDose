#include <bits/stdc++.h>
using namespace std;
 
bool isPowerOf2(int n) 
{ 
    return n && (!(n&(n-1))); 
} 
 
int main() 
{ 
    int n;
    cin>>n;
    (isPowerOf2(n))? cout<<"True": cout<<"False"<<endl;
    return 0; 
} 