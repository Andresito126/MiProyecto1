#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, suma;
    
    printf("Ingrese el primer numero");
    scanf("%d", &num1);

    printf("ingrese el segundo numero pa: ");
    scanf("%d", &num2);

    suma = num1+num2;
    printf("La suma de %d y %d es:%d\n",num1,num2,suma );


    return 0;
}
