#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=0;              //temp variable 'a'
    while(n>0){
        a*=10;
        a+=(n%10);
        n/=10;
    }
    printf("Result: ");
    while(temp>0){
        printf("'%d' ",a%10);
        a/=10;
    }
    return 0;
}