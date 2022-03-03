
#include<stdio.h>
int main()
{
    int l,b,w,c,A,T_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w||b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        A=(l*b)-(l-2*w)*(b-2*w);
        T_cost=A*c;
        printf("%d",T_cost);
    }
    return 0;
}
