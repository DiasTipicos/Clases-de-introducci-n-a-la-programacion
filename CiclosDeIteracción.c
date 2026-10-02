#include <stdio.h>


void promedio(){
    float calificacion;
    float promedio;
    float cantidadDeMaterias; 
    printf("cuantas materias tienes \n");
    scanf("%f", &cantidadDeMaterias);
    promedio = 0;

    for (int i = 0; i < cantidadDeMaterias; i++){
        printf("Da tu calificacion \n");
        scanf("%f", &calificacion);
        promedio += calificacion;
    }
    promedio = promedio / cantidadDeMaterias;
    printf("El promedio es: %f \n", promedio);

}
int suma(int a, int b){
    return a + b;
}
int resta(){
    int a, b;
    printf("Dame el primer valor \n");
    scanf("%d", &a);
    printf("Dame el segundo valor \n");
    scanf("%d", &b);
    return a - b;
}
void mensaje(){
    printf("hola mundo \n");
}
float promedioDeNCalificaciones() {
    
    return 0.5;
}





int main(){

    int menu = 1;

    int valor;
    int valor1 = 5;
    int valor2 = 6;
    
    valor = suma(valor1, valor2);
    printf("el valor de la suma es: %d \n", valor);
    mensaje();

     do{
         printf("que quieres hacer del menu \n");
         printf("1.- calcular promedio de n Calificaciones \n");
         printf("2.- adios mundo \n");
         printf("3.- salir \n");
         scanf("%d", &menu);


         switch(menu){
             case 1:
                 promedio();
                 promedio();
                 break;
             case 2:
                  valor = resta();
                  printf("el valor de la resta es: %d \n", valor);
                 break;
             case 3:
                 printf("saliste del menu \n");
                 break; 
             default:
                 printf("opcion no valida \n");
            }

        
        
      

        }while(menu != 3);



    return 0;
}