#include<stdio.h>
int main()
{
    int a,b,low,lcm;
    scanf("%d %d",&a,&b);
    low=(a<b)?a:b;
    while(1){
        if(low%a==0 && low%b==0){
            lcm=low;
            break;
        }
        low++;
    }
    printf("\n%d",lcm);
}