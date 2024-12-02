#include<stdio.h>

int inverteNumero(int numero){
    int inverte = 0, resto;
    while (numero != 0){
        resto = numero % 10;
        inverte  = inverte * 10 + resto;
        numero /= 10;
    }
    return inverte;
}

int main(int argc, char const *argv[])
{
    int numero, cont = 0;

    while (cont != 1){
        printf("digite um numero: ");
        scanf("%d", &numero);
        if (numero >= 100 && numero < 1000){
            printf("%d\n", inverteNumero(numero));
            cont = 1;
        }else{
            printf("digite um numero entre 100 e 1000\n");
        }
    }
    return 0;
}
