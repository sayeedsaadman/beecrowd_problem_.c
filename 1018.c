#include <stdio.h>


 int main(){
    int notes,num;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    num = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", num/50);
    num = (num%50);

    printf("%d nota(s) de R$ 20,00\n", num/20);
    num = (num%20);

    printf("%d nota(s) de R$ 10,00\n", num/10);
    num = (num%10);

    printf("%d nota(s) de R$ 5,00\n", num/5);
    num = (num%5);

    printf("%d nota(s) de R$ 2,00\n", num/2);
    num = (num%2);

    printf("%d nota(s) de R$ 1,00\n", num/1);
    return 0;
 }
