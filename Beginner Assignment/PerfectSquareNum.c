#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,b,i,p;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        p=sqrt(i);           //including built-in function of math library
        if(p*p==i)
            printf("%d ",i);
    }
    return 0;
}