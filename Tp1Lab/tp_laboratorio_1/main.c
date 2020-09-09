#include <stdlib.h>
#include "funciones.h"

int main()
{
int multiplicar;
int suma;
int numero1;
int numero2;
int resta;
float dividir;
int factorial1;
int factorial2;
int opcion;
int flag;

flag=0;

do{
printf("\n1.Ingresar primer numero\n");
printf("2.Ingresar segundo numero\n");
printf("3.Calcular\n");
printf("4.Mostrar operacion\n");
printf("5.Salir\n");
printf("\nElija la opcion: ");
scanf("%d", &opcion);

while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5){
printf("Opcion incorrecta,ingrese la opcion disponible.\n");
printf("\n1.Ingresar primer numero\n");
printf("2.Ingresar segundo numero\n");
printf("3.Calcular\n");
printf("4.Mostrar operacion\n");
printf("5.Salir\n");
printf("Elija la opcion: ");
scanf("%d", &opcion);
}

switch(opcion){
case 1:
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("\nPrimerNumero=%d\n", numero1);
    break;
case 2:
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    printf("\nB=%d\n", numero2);
    break;
case 3:
    factorial1= FactorizarNumero(numero1);
    factorial2= FactorizarNumero(numero2);
    printf("\nEl factorial de %d es %d , y el de %d es %d\n", numero1, factorial1, numero2,factorial2);
    suma= SumarNumeros(numero1,numero2);
    printf("La suma de los numeros es de: %d\n", suma);
    resta= RestarNumeros(numero1,numero2);
    printf("La resta de los numeros es de: %d\n", resta);
    multiplicar= MultiplicarNumeros(numero1,numero2);
    printf("La multiplicacion de los numeros es de: %d\n", multiplicar);
    while(numero2==0){
    printf("No se puede dividir por 0, ingrese los numeros otra vez.\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
}
    dividir= DividirNumeros(numero1,numero2);
    printf("La division de los numeros es: %.2f\n", dividir);
    break;

case 4:
    factorial1= FactorizarNumero(numero1);
    factorial2= FactorizarNumero(numero2);
    printf("\nEl factorial de %d es: %d y El factorial de %d es: %d", numero1, factorial1, numero2,factorial2);
    suma= SumarNumeros(numero1,numero2);
    printf("\nEl resultado de %d+%d es: %d",numero1, numero2, suma);
    resta= RestarNumeros(numero1,numero2);
    printf("\nEl resultado de %d-%d es: %d",numero1, numero2, resta);
    multiplicar= MultiplicarNumeros(numero1,numero2);
    printf("\nEl resultado de %d*%d es: %d",numero1, numero2, multiplicar);

    while(numero2==0){
    printf("No es posible dividir por 0, ingrese los numeros otra vez.\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
}
    dividir= DividirNumeros(numero1,numero2);
    printf("\nEl resultado de %d/%d es: %.2f",numero1, numero2, dividir);
    break;
case 5:
    flag=1;
    break;
        }
    }while(flag==0);
return 0;
}