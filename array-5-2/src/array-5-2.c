/*
 ============================================================================
 Name        : array-5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 5-2: Hacer una función que calcule
 el promedio de los valores del Array que recibe y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void pedirNumeros(int numeros[],int logitud);
int obtenerEntero(char*mensaje , int minimo , int maximo);
int promedio (int numeros[],int logitud);


int main(void) {
	setbuf(stdout,NULL);
	int numeros[TAM];

	pedirNumeros(numeros, TAM);
	promedio(numeros, TAM);

	return EXIT_SUCCESS;
}

void pedirNumeros(int numeros[],int logitud)
{


	printf("\n");

	for(int i=0 ; i<logitud;i++)
	{
		numeros[i]=obtenerEntero("Ingresa numero", -100, 100);
	}

}
int obtenerEntero(char*mensaje , int minimo , int maximo)
{
	int numeroIngresado;
	printf("%s",mensaje);//cadena de texto no lleva &
	scanf("%d",&numeroIngresado);
	while(numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("Error reingrese los numeros");
		scanf("%d",&numeroIngresado);

	}
	return numeroIngresado;
}
int promedio (int numeros[],int logitud)
{
	int retorno=-1;
	int acumulador=0;
	int contador=0;
	float promedio;

	for(int i=0; i<logitud;i++)
	{
		contador++;

		acumulador=acumulador+ numeros[i];


	}
	promedio=(float)acumulador/contador;

	printf("EL PROMEDIO DE LOS NUMEROS ES %.2f ", promedio);


	return retorno;
}
