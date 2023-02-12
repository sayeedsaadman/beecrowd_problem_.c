//incomplete
#include<stdio.h>
int main()
{
    int a,x,y,i,sum;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2!=0)
        {
            for(; x<y; x+=2){
                sum+=x;}
        }


        printf("%d",sum);
    }



    return 0;
}
