#include<stdio.h>
int main()
{

    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
     printf("TRIANGULO: %.3lf\n", A*C*0.5);
     printf("CIRCULO: %.3lf\n", C * C * 3.14159);
     printf("TRAPEZIO: %.3lf\n", ((A + B) / 2) * C);
     printf("QUADRADO: %.3lf\n", B * B);
     printf("RETANGULO: %.3lf\n", A * B);
     return 0;

}
,pi,tri,c,tra,s,r
