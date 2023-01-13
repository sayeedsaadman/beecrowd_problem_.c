#include<stdio.h>
int main()
{
    double speed,time,fuel;
    scanf("%lf %lf",&speed,&time);

    fuel=(speed*time)/12;

    printf("%.3lf\n",fuel);
    return 0;
}
