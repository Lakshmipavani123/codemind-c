#include<stdio.h>
int main()
{
    int n,rem=0,sum=0,tem;
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(tem%sum!=0)
    printf("False");
    else
    printf("True");
    return 0;
    
}