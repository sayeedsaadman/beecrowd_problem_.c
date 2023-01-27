#include <stdio.h>

int main()
{
    double num,sum=0,avg;
    int i,count=0;

    for(i=1;i<=6;i++){
        scanf("%lf",&num);
        if(num>0){
          sum = sum + num;
          count++;
        }
    }
     avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
    return 0;
}
