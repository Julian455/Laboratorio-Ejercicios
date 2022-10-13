/*
 ============================================================================
 Name        : array5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 5-3: Realizar una función que reciba
 como parámetros un array de enteros yun entero por referencia.
 La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void pedirNumeros(int numeros[], int logitud);
int obtenerEntero(char *mensaje, int minimo, int maximo);
int numeroMaximo(int numeros[], int logitud,int *resultado);

int main(void) {
	setbuf(stdout, NULL);
    int numero[TAM];
    int numeroMax;

    pedirNumeros(numero, TAM);

    numeroMaximo(numero, TAM, &numeroMax);

    printf("El numero maximo es %d ",numeroMax);


	return EXIT_SUCCESS;
}
void pedirNumeros(int numeros[], int logitud) {

	printf("\n");

	for (int i = 0; i < logitud; i++) {
		numeros[i] = obtenerEntero("Ingresa numero", -100, 100);
	}

}
int obtenerEntero(char *mensaje, int minimo, int maximo) {
	int numeroIngresado;
	printf("%s", mensaje); //cadena de texto no lleva &
	scanf("%d", &numeroIngresado);
	while (numeroIngresado < minimo || numeroIngresado > maximo) {
		printf("Error reingrese los numeros");
		scanf("%d", &numeroIngresado);

	}
	return numeroIngresado;
}
int numeroMaximo(int numeros[], int logitud,int *resultado)
{
	int retorno=-1;
	int flag=0;
	int maximo;

	for(int i=0;i<logitud;i++)
	{
	  if(flag==0 || numeros[i]>maximo)
	  {
		  maximo= numeros[i];//los numero se copian de derecha a izquierda
		  flag=1;
	  }

	}
    *resultado=maximo;
	return retorno;
}
