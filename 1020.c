#include<stdio.h>
int main()
{
    int x,d,m,y;
    scanf("%d",&x);
    y = x / 365 ;
    m = x % 365 / 30;
    d = x % 365 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;

}
