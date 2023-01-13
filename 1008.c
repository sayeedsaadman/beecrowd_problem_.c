#include<stdio.h>
int main()
{
    int number,hour;
    float payment;
    double salary;

    scanf("%d %d %f",&number,&hour,&payment);

    salary=hour*payment;

    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}
