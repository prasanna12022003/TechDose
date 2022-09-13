#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    s=s*(s-a)*(s-b)*(s-c);
    area=sqrt(s);                 //buit-in function in math library
    printf("%f",area);
    return 0;
}