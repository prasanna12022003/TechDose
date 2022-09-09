#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A,B;
  cin>>A>>B;
  A^=B;                 //swapping using bitwise operator   
  B^=A;
  A^=B;
  cout<<A<<" "<<B<<endl;
  return 0;
}