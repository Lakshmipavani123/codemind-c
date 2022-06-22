#include<stdio.h>
int main()
{
    int n,se=0,so=0,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        if(rem%2==0)
        {
            se++;
        }
        else
        {
            so++;
        }
        n=n/10;
    }
    if(se==0&&so>=1)
    {
        printf("Odd");
    }
    else if(so==0&&se>=1)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}