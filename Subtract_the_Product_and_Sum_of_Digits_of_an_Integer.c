#include<stdio.h>
int main()
{
    int n,sub,p=1,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p*=r;
        s+=r;
        n=n/10;
    }
    sub=p-s;
    printf("%d",sub);
}