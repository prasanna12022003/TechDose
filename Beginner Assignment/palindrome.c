#include<stdio.h>
int main()
{
    int len,i,count=0;
    char a[50];
    scanf("%s",a);
    len=strlen(a);        //using built-in function to find length
    for(i=0;i<len;++i){
        if(a[i]==a[len-i-1]){
            count++;
        }
    }
    if(len==count){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }
}