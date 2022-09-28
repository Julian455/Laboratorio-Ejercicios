/*
 ============================================================================
 Name        : array5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array.
 Calcular la sumatorio de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int obtenerEntero(char*mensaje , int minimo , int maximo);

void pedirNumeros(int numeros[],int logitud);

int imprimirResultado(int numero[],int logitud);

int main(void) {
	setbuf(stdout,NULL);

	int array[TAM];



	pedirNumeros(array, TAM);

	imprimirResultado(array, TAM);

	return 0;

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
void pedirNumeros(int numeros[],int logitud)
{


	printf("\n");

	for(int i=0 ; i<logitud;i++)
	{
		numeros[i]=obtenerEntero("Ingresa numero", -100, 100);
	}

}
int imprimirResultado(int numero[],int logitud)
{
	int retorno=-1;
	int acumuladorDePares=0;
	int sumar=0;


    if(logitud>0)
    {
    	retorno=0;
    	for(int i=0 ; i<logitud;i++)
    	{
    		printf("\nNumeros ingresado %d",numero[i]);
    	}
    	for(int i=0 ; i<logitud;i++)
    	  {
    	    sumar=sumar + numero[i];
    	   }
    	    printf("\nLos suma en total es : %d",sumar);

    	for(int i=0 ; i<logitud;i++)
    	{
    		 if(numero[i]%2==0)
    		   {
    		     acumuladorDePares=acumuladorDePares+numero[i];
    		     printf("\nlos numeros pares son %d " ,numero[i]);

    		   }

    	}
        printf("\nLa sumatoria de los pares es: %d",acumuladorDePares);
    }

	return retorno;
}
