/* 
 * File:   main.c
 * Author: Ing. Ricardo Presilla
 * Version: 1.0
 * Created on 17 de julio de 2015, 04:38 PM
 */

#include <stdio.h>
#define MAXIMO 100
/**
 * Programa en C para calcular n números de la serie de Fibonacci.
 */
long int Fibonacci(int ter);
int main(void) {
    int terminos=1; 
    long int f=0;
    printf("Programa para generar la serie de Fibonacci.\n");
    printf("La cantidad de terminos de la serie a mostrar: ");
    scanf("%d",&terminos);
    if(terminos<=MAXIMO){
        f=Fibonacci(terminos);
    }
    else{
        printf("La cantidad de terminos no puede ser procesada.\n");
    }
    return;
}
//
long int Fibonacci(int ter){
    int a=0,b=1, i;
    long int fibo=0;
    printf("%d, %d, ",a,b);
    for( i = 0 ; i < ter; i++){
        fibo=a+b;
        a=b;
        b=fibo;
        printf("%ld, ",fibo);
    }
    return fibo;
}
