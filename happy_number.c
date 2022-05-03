#include<stdio.h>
int main()
{
    int n,rem,m,sum;
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1||sum==7)
    printf("True");
    else
    printf("False");
    return 0;
}