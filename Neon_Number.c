#include<stdio.h>
int main()
{
    int n,d,sum=0,r;
    scanf("%d",&n);
    d=n*n;
    while(d>0)
    {
        r=d%10;
        sum=sum+r;
        d=d/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}