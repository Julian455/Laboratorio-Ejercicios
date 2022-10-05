/*
 ============================================================================
 Name        : array5-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array.
 Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "imput.c"
#define TAM 10

void pedirNumeros(int numeros[],int logitud);
int obtenerEntero(char*mensaje , int minimo , int maximo);
int cantidadNegativos(int numeros[], int logitud,int *negativos);
int cantidadPositivos(int numeros[], int logitud,int *positivos);
int mayorPares(int numeros[], int logitud , int *mayorPares);
int listarArray(int numeros[], int logitud);
int impares(int numeros[], int logitud);
int determinarParidad(int numero);
int determinarParidad(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numero[TAM];
	int canNegativos;
	int canPositivos;
	int maxPar;

	pedirNumeros(numero, TAM);

	cantidadNegativos(numero, TAM,&canNegativos);
	cantidadPositivos(numero, TAM, &canPositivos);
	mayorPares(numero, TAM, &maxPar);
	listarArray(numero, TAM);
	impares(numero, TAM);

	printf("\nLa cantidad de numeros negativos es %d ", canNegativos);
	printf("\nLa cantidad de numeros positivos es %d ",canPositivos);
	printf("\nEl numero par maximo es  %d ",maxPar);








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
int cantidadNegativos(int numeros[], int logitud,int *negativos)
{
	int retorno=-1;
	int contadorNegativos=0;

	for(int i=0; i<logitud;i++)
	{
		if(numeros[i]<0)
		{
			contadorNegativos++;
		}
	}
	*negativos=contadorNegativos;

	return retorno;
}
int cantidadPositivos(int numeros[], int logitud,int *positivos)
{
	int retorno=-1;
		int contadorPositvos=0;

		for(int i=0; i<logitud;i++)
		{
			if(numeros[i]>0)
			{
				contadorPositvos++;
			}
		}
		*positivos=contadorPositvos;

		return retorno;
}
int mayorPares(int numeros[], int logitud , int *mayorPares)
{
	int retorno=-1;
	int contadorPares=0;
	int maxPar;


	for(int i=0;i<logitud;i++)
	{
		if(numeros[i]%2==0)
		{
			contadorPares++;
			if(i==0||numeros[i]>maxPar)
			{
				maxPar=numeros[i];

			}

		}

	}
	*mayorPares=maxPar;

   return retorno;
}
int listarArray(int numeros[], int logitud)
{
	int retorno=-1;
	if(logitud>0)
	{
		retorno=0;
		printf("\nNumero ingresados ");
		for(int i=0;i<logitud;i++)
		{
			printf("[(%d)] ",numeros[i]);

		}

	}
	return retorno;
}
int impares(int numeros[], int logitud)
{
	int retorno=-1;
	int opcion;

	printf("\nLa posicion de impares es ");
    for(int i=0;i<logitud;i++)
    {
    	opcion=determinarParidad(numeros[i]);
    	if(opcion==0)
    	{
    		printf("[(%d)] ",i);

    		retorno=0;
    	}

    }


	return retorno;

}
int determinarParidad(int numero)
{
	int paridad;
	if(numero%2==0)
	{
		paridad=1;
	}
	else
	{
		paridad=0;
	}

	return paridad;
}
