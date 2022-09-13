#include <stdio.h>

int main()
{
    int n,i,j,s,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=1;s<n-i;s++)
            printf(" ");
        for(j=0;j<=i;j++){
            if(j==0 || i==0){
                p=1;
            }
            else{
                p=p*(i-j+1)/j;
            }
            printf("%2d",p);
        }
        printf("\n");
    }
}