#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,d,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A==0){
            printf("Impossivel calcular\n");
    return 0; }

    d=B*B-4*A*C;

    if(d>=0){
        R1= (-B+sqrt(d))/(2*A);

        R2= (-B-sqrt(d))/(2*A);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else {
        printf("Impossivel calcular\n");
    }
    return 0;
}
