#include<stdio.h>
int main()
{
    int n,sum=0,p=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    if(sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}