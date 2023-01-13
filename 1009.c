#include<stdio.h>
int main()
{
    char name;
    float salary;
    double sales,TOTAL;

    scanf("%s%f%lf",&name,&salary,&sales);

    TOTAL = salary + (sales*15)/100;

    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
