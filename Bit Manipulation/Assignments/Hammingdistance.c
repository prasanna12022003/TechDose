#include <stdio.h>
#include <stdlib.h>
int hammingDistance(int a, int b)
{
    int x = a ^ b;
    int setBits = 0;
    while (x > 0) 
    {
        setBits += x & 1;
        x >>= 1;
    }
    return setBits;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n", hammingDistance(a,b));
    return 0;
}