/*
 * eSector.c
 *
 *  Created on: 10 oct. 2022
 *      Author: julia
 */
#include "eSector.h"
#define OCUPADO	0//esta ocupado el isEmpty
#define LIBRE 1//esta libre el isEmpty

int inicializarEstructuraSector(eSector lista[],int tam)
{
	int retorno=-1;


	//con esto sabems si mi campo isEmpty esta ocupado o no
	if(lista!=NULL && tam>0)
	{
		for(int i=0;i<tam;i++)
		{
			lista[i].isEmpty=LIBRE;

		}
		retorno=0;
	}

	return retorno;

}
int buscarIndiceLibreSector(eSector lista[],int tam)
{
	int retorno=-1;

	if (lista != NULL && tam > 0)
	{
		for (int i = 0; i < tam; i++)
		{
			if(lista[i].isEmpty==LIBRE)
			{
				//agarro el numero de mi posicion que es i y lo devuelvo por el retorno
				retorno=i;
				//aca rompo con un break para que no siga buscando
				break;
			}
		}
		retorno = 0;
	}

	return retorno;
}
eSector pedirDatos()
{
	eSector aux;

	aux.id=obtenerRango("Ingrese el numero de id", -158, 200000);
	pedirChar("Ingrese la descripcion ", aux.descripcion, LEN_DESCRIPCION);
	aux.isEmpty=OCUPADO;

	return aux;
}
int altaSector(eSector lista[],int tam)
{
	int retorno=-1;
	int posicionLibre;
	eSector sector;

	if(lista!=NULL && tam>0)
	{
		posicionLibre=buscarIndiceLibreSector(lista, tam);
		sector=pedirDatos();//modificar parametros y recibiri la listas de sectores
		//va !=-1 porque en buscaPosicionLibre -1 era si no habia y si habia era un numero positivo
		if(posicionLibre!=-1)
		{
			//mi lista posicion libre va a ser igual a el empelado que acabo de agregar
			lista[posicionLibre]=sector;
			retorno=0;
		}
	}


	return retorno;

}
void mostrarUnoSector(eSector sector)
{
	printf("%d--%s \n",sector.id,sector.descripcion);
}
int mostrarTodosSector(eSector lista[],int tam)
{
	int retorno = -1;

	if (lista != NULL && tam > 0) {
		for (int i = 0; i < tam; i++) {
			if (lista[i].isEmpty == OCUPADO) {
				mostrarUnoSector(lista[i]);

			}
			retorno = 0;
		}

	}

	return retorno;

}
eSector buscarUnoPorIdSector(eSector listaSector[],int tamSector,int id)
{
	eSector aux;

	for (int i = 0; i < tamSector; i++) {
		if (listaSector[i].id == id) {
			aux = listaSector[i];
			break;
		}
	}

	return aux;
}


