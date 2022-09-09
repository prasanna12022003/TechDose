#include <bits/stdc++.h>
using namespace std;
                                  //time complexity : O(log(N))
int gcd(int A, int B){
    return A == 0 ? B : gcd(B%A, A);
}

int main(){
    int A, B; 
    cin >> A >> B;

    cout << gcd(A, B) << endl;     //built in func in CPP
    cout << __gcd(A, B) << endl;   
    return 0;
}
