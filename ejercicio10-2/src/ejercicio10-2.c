/*
 ============================================================================
 Name        : ejercicio10-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "nexo.h"
#define MAX_SECTORES 4
#define MAX_LISTA 300
#define OCUPADO 0
#define LIBRE 1
int main(void) {
	setbuf(stdout,NULL);
	int salir=0;
	int opciones;
	int id;
	int evaluarRetorno;
	id=1;


	eEmpleado lista[MAX_LISTA];
	eSector listaSectores[MAX_SECTORES]={{100," Sistemas",OCUPADO},{200, "RescursosHumanos",OCUPADO},{300, "Adminitracion",OCUPADO},{400 ,"Gerencia",OCUPADO}};
	//ACA TRAEMO EL INICIALIZAR LA ESTRUCTURA ASI NOS PUEDEN MOSTRAR LOS VALOES INGRESADOS
	inicializarEstructuraEmp(lista, MAX_LISTA);
	do
	{
		printf("\n1-AlLTAS "
				"\n2-MODIFICAR "
				"\n3_BAJAR "
				"\n4-INFORMAR "
				"\n5-SALIR ");
		opciones=obtenerRango("\nSelecione una opcion : ",1,5);

     switch(opciones)
	 {
		case 1:
			//pongo !=-1 porque en mi funcion alta tengo que si es 0 salio todo bine y si salio
			//todo bien incremento el id
			// no se repit porque va incremetando
			printf("\t\t---ALTA---\n");
			if(altaNexo(lista, MAX_LISTA, id, listaSectores, MAX_SECTORES)!=-1)
			{
			 id++;
			}
			break;
		case 2:
			printf("\t\t---MODIFICAR---\n");
			break;
		case 3:
			printf("\t\t---BAJAS---\n");
			bajaNexo(lista, MAX_LISTA, listaSectores, MAX_SECTORES);
			//mi variable evalarRetorno le asgino bajaNexo asi no ponemos en cads if bajanexo y todo eso
			evaluarRetorno=bajaNexo(lista, MAX_LISTA, listaSectores, MAX_SECTORES);

			if(evaluarRetorno==0)
			{
				printf("\n*****El empleado a elimindo correctamente*****\n");
			}
			else
			{
				if(	evaluarRetorno==-2)
				{
					printf("\n*****No existe el id*****\n");
				}
				else
				{
					printf("\n*****No se a podido eliminar*****\n");

				}
			}
			break;
		case 4:
			printf("\t\t---INFORMAR---\n");
			mostrarTodosNexo(lista, MAX_LISTA, listaSectores, MAX_SECTORES);
			break;
		case 5:
			printf("\t\t---SALIR---\n");
			salir=obtenerRango("1 para salir /0 para salir ", 0, 1);
			break;

	 }

	}while(salir!=1);



	return EXIT_SUCCESS;
}
