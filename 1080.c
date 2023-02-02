
// to be countinue

#include<stdio.h>
int main()
{
    int i,n=10,x,max,pos;
    i = 1;
    max = -1;
    pos = -1;
    while(i<=n)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max = x;
            pos = i;
        }
        i++;
    }
    printf("%d\n",max);
    printf("%d\n",i);


}
