// Calculadora de área

// Crea un programa que tenga tres funciones:

// calcularAreaRectangulo(base, altura) → recibe base y altura y devuelve el área.
// calcularPerimetroRectangulo(base, altura) → recibe base y altura y devuelve el perímetro.
// mostrarResultados(area, perimetro) → recibe los resultados y los muestra.

// En main():

// Pedir al usuario la base y altura.
// Llamar a las funciones correspondientes.
// Mostrar el área y el perímetro.

// Crea un programa que simule un combate entre un personaje y un enemigo.

// El personaje comienza con:

// Vida: 100
// Ataque: 25
// Defensa: 10

// El enemigo comienza con:

// Vida: 120
// Ataque: 20
// Defensa: 8
// En cada turno, el jugador debe poder elegir una acción:

// ===== COMBATE =====

// Vida del jugador: 100
// Vida del enemigo: 120

// 1. Atacar
// 2. Curarse
// 3. Huir
// 1. Atacar

// El daño realizado debe calcularse mediante una función:

// daño = ataque del jugador - defensa del enemigo

// La función debe devolver el daño y reducir la vida del enemigo.


// 2. Curarse

// El jugador recupera 20 puntos de vida, pero no puede superar 100.
// 3. Huir

// Termina el combate inmediatamente.

#include <stdio.h>
    
int menu = 1;
float base, altura, area, perimetro; 
float resultado = 0;

void calcularAreaRectangulo(){
    printf("Dime la base del rectángulo: \n");
    scanf("%f", &base);
    printf("Dime la altura del rectángulo: \n");
    scanf("%f", &altura);
    resultado = base * altura;
    printf("El área del rectángulo es: %.2f \n", resultado);
}
void calcularAreaDeUnCuadrado(){
    printf("Dime la base del cuadrado: \n");
    scanf("%f", &base);
    resultado = base * base;
    printf("El área del cuadrado es: %.2f \n", resultado);
}

int main(){

    
    do{
        printf("Dame un numero por favor para seleccionar en el menu \n");
        printf("opcion (1) Calculare area de rectangulo \n");
         printf("opcion (2) Calculare area de cuadrado \n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
               calcularAreaRectangulo();
                break;
            case 2:
                calcularAreaDeUnCuadrado();
                break;
            case 3:

                break;
            default:
                printf("Opción no válida, por favor elige una opción del 1 al 3.\n");
                break;

        }

    }while(menu != 4);

    return 0; 
}




