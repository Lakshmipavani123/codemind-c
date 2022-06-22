#include<stdio.h>
int main()
{
    int n;
    float i,s,tep;
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        tep=1/i;
        s+=tep;
    }
    printf("%.2f",s);
}