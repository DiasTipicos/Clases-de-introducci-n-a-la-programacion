#include <stdio.h>

int main(){


    // papas con queso
    /*
    +0.2
      Pidele un numero al usuario y dile si es un numero par

      El usuario te dara la temperatura en Farenheit y 
      tienen que confirmar si el usario esta pasando los 31 grados
      celcius o no.

      dos alumnos van a subir 3 calificaciones y van a ver que alumno
      saco el promedio mas alto de los dos y mostrarlo en pantalla
    */
    float cal1, cal2, cal3, promedio;

    printf("Dame la calificacion; \n");
    scanf("%f", &cal1);

    printf("Dame la calificacion; \n");
    scanf("%f", &cal2);

    printf("Dame la calificacion; \n");
    scanf("%f", &cal3);

    promedio = (cal1 + cal2 + cal3)/ 3;

    if(promedio >= 7){
        printf("Pasaste weee \n");
    }else{
        printf("llama.... ");
    }


    return 0;
}
