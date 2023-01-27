#include<stdio.h>
int main()
{
    double x;
    int i,sum;
    sum=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&x);
        if(x>0){
        sum=sum+1;
        }
    }
    printf("%d valores positivos\n",sum);

    return 0;
}
