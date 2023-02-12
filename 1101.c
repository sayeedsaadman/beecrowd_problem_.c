#include<stdio.h>
int main()
{
    int m,n,o,sum=0,i;
    while(1)
    {
    scanf("%d%d",&m,&n);
    if(m==0 || n==0)
    {
        break;
    }
    if(m>n)
    {
        o = m;
        m = n;
        n = o;
    }
    for(i=m;i<=n;i++)
    {
        sum = sum+i;

        printf("%d ",i);
    }
    printf("Sum=%d",sum);
    }
    return 0;
}
