#include <stdio.h>
/*
Una tienda de videojuegos que hacia descuento
el iva
cantidad de videojuegos
precio individual del videojuego
descuento = 35%
total a pagar

*/

int main(){

    float precio, iva, descuento, subtotal, total;
    int cantidadDeJuegos = 0;

    printf("Oye cuanto cuesta el juego individual? \n");
    scanf("%f", &precio);

    printf("Oye cuantos juegos vas a llevar? \n");
    scanf("%d", &cantidadDeJuegos);

    //calculos
    subtotal = precio * cantidadDeJuegos;
    descuento = subtotal * 0.35;
    iva = subtotal * 0.16;
    total = subtotal - descuento + iva;

    //salida
    printf("ira wacha carnal tu juego: %.2f con la cantidad que llevas %d \n", precio, cantidadDeJuegos);
    printf("te queda un total de: %.2f", total);
    printf("pagaste de iva: %.2f dandote un descuento del: %.2f", iva, descuento);

    

    return 0; 
}