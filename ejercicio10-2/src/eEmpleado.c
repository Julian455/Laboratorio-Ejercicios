

/*
 * eEmpleado.c
 *
 *  Created on: 9 oct. 2022
 *      Author: julian
 */
#include "eEmpleado.h"

#define OCUPADO	0//esta ocupado el isEmpty
#define LIBRE 1//esta libre el isEmpty


//inicializamos toos los valores
int inicializarEstructuraEmp(eEmpleado lista[],int tam)
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
//esto me devuelve el numero de indice dentro del array donde yo puedo guardar informacion
//funcion que me diga donde guardar informacion
int buscarIndiceLibreEmp(eEmpleado lista[],int tam)
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
//aca tenemos que poder ingresar mi empleado dentro de mi array
//funcion que me cree el empledo lo primero de todo y esta funcion me devuelve un empleado
eEmpleado pedirDatosEmpleadoEmp(int id)//modificar parametros y recibiri la listas de sectores
{
	eEmpleado aux;
	aux.id=id;
	//pido nombre
	pedirChar("Ingrese el nombre: ", aux.nombre, LEN_CHARS);
	//pido apellido
	pedirChar("Ingrese el apellido ", aux.apellido, LEN_CHARS);
	//pedir salario tipo numero
	aux.salario = obtenerRangoFloat("Ingrese el salario: ", 0, 10000);
	//aca deberia mostrar la lista de sectores
	aux.sector=obtenerRango("Seleciones el id del sector: ", 0, 10000);
	//falta nada mas emsEmpty
	aux.isEmpty= OCUPADO;

	return aux;
}
//este usuario que cree arriba lo tengo que agregar a mi array eEmpleado
//mi usuario ingrese al ALTA
int altaEmp(eEmpleado lista[],int tam,int id)
{
	int retorno=-1;
	int posicionLibre;
	eEmpleado empleadoAgregar;

	if(lista!=NULL && tam>0)
	{
		posicionLibre=buscarIndiceLibreEmp(lista, tam);
		empleadoAgregar=pedirDatosEmpleadoEmp(id);//modificar parametros y recibiri la listas de sectores
		//va !=-1 porque en buscaPosicionLibre -1 era si no habia y si habia era un numero positivo
		if(posicionLibre!=-1)
		{
			//mi lista posicion libre va a ser igual a el empelado que acabo de agregar
			lista[posicionLibre]=empleadoAgregar;
			retorno=0;
		}
	}


	return retorno;

}
//mostrar empleado
//como lo recibimos lo mostramos
void mostrarUnoEmp(eEmpleado empleado)
{
	printf("%d - %s - %s - %.2f - %d \n", empleado.id, empleado.nombre,
			empleado.apellido, empleado.salario, empleado.sector);
}
//mostrar todo
int mostrarTodosEmp(eEmpleado lista[],int tam)
{
	int retorno = -1;
    if(lista!=NULL && tam>0)
    {
    	for(int i=0 ;i<tam;i++)
    	{
    		if(lista[i].isEmpty==OCUPADO)
    		{
    			mostrarUnoEmp(lista[i]);
    		}
    	}
    }

	return retorno;

}
eEmpleado buscarPorIdEmp(eEmpleado lista[],int tam,int id)
{
	eEmpleado aux;
    for(int i=0;i<tam;i++)
    {
    	if(lista[i].id==id)
    	{
    		aux=lista[i];
    		break;
    	}
    }
	return aux;
}
//aca creo posicion por es un ejercicio me pide eliminar un empleado
//5retrono un entero int porque voy a estar devolviendo la posicion del empleado asi poder eliminarlo
int buscarPosicionPorIdEmp(eEmpleado lista[],int tam,int id)
{
	int aux;
	aux=-1;
	if(lista!=NULL && tam>0)
	{
		  for(int i=0;i<tam;i++)
		    {
		    	//si no lo econtro nos tira -1 y si nos econtro tira un posicion valida ya que aux esta en -1 y aux i
		    	if(lista[i].isEmpty==OCUPADO && lista[i].id==id)
		    	{
		    		aux=i;
		    		break;
		    	}
		    }
	}

	return aux;
}



















































































