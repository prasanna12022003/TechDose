#include <stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    scanf("%d", &n);
    printf("Enter the Array Elements:  ");
    for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted Elements is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}