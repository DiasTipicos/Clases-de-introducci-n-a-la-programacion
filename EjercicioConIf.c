#include <stdio.h>

int main(){


    int numeroEntero = 3;
    int otroNumero = 2;
    float numeroFlotante = 2.1;
    float otroNumeroFlotante = 2.00;

    char letra = 'a';
    char otraLetra = 'A';

    
    
    if(numeroEntero > otroNumero){
        printf("Es mayor que \n");
        
    }
    if(otroNumero < numeroFlotante){
        printf("los flotantes también los podemos comparar \n");
    }

    if(otroNumero == otroNumeroFlotante){
        printf("Con punto decimal existe de una forma extraña \n");
    }

    if(letra != otraLetra){
        printf("las letras son diferentes \n");
    }



    return 0;
}