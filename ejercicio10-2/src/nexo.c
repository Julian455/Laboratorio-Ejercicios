/*
 * nexo.c
 *
 *  Created on: 11 oct. 2022
 *      Author: julia
 */
#include "nexo.h"
#define OCUPADO 0
#define LIBRE 1

eEmpleado pedirDatosEmpleadoNexo(int id,eSector listaSector[],int tamSector)//modificar parametros y recibiri la listas de sectores
{
	eEmpleado aux;
	aux.id=id;

	pedirChar("Ingrese el nombre: ", aux.nombre, LEN_CHARS);
	pedirChar("Ingrese el apellido ", aux.apellido, LEN_CHARS);
	aux.salario = obtenerRangoFloat("Ingrese el salario: ", 0, 10000);
	//aca debeari mostrar l lista sectores
	mostrarTodosSector(listaSector,tamSector);
	aux.sector=obtenerRango("Seleciones el id del sector: ", 0, 10000);
	aux.isEmpty= OCUPADO;

	return aux;
}
int altaNexo(eEmpleado lista[],int tam,int id,eSector listaSector[],int tamSector)
{
	int retorno=-1;
	int posicionLibre;
	eEmpleado empleadoAgregar;

	if(lista!=NULL && tam>0)
	{
		posicionLibre=buscarIndiceLibreEmp(lista, tam);
		empleadoAgregar=pedirDatosEmpleadoNexo(id,listaSector,tamSector);

		if(posicionLibre!=-1)
		{
			lista[posicionLibre]=empleadoAgregar;
			retorno=0;
		}
	}


	return retorno;

}
//mostrar empleado
//como lo recibimos lo mostramos
void mostrarUnoNexo(eEmpleado empleado,eSector listaSector[],int tamSector)
{
	 int id=empleado.salario;
	 eSector aux;
	 aux=buscarUnoPorIdSector(listaSector, tamSector, id);
	printf("%d - %s - %s - %.2f - %s \n", empleado.id, empleado.nombre,
			empleado.apellido, empleado.salario,aux.descripcion);
}
//mostrar todo
int mostrarTodosNexo(eEmpleado lista[],int tam,eSector listaSector[],int tamSector)
{
	int retorno = -1;

	if (lista != NULL && tam > 0) {
		for (int i = 0; i < tam; i++) {
			if (lista[i].isEmpty == OCUPADO) {
				mostrarUnoNexo(lista[i], listaSector, tamSector);
				retorno = 0;
			}

		}

	}

	return retorno;

}
//no traemos el id porque se lo pedimos al usuario que eliga a quien id quiere eliminar
//y esta funcion va en neo porque debemos mostrar todo lo empleado para que el una persona
//eliga a quien quiere eliminar
/*
int bajaNexo(eEmpleado lista[],int tam,eSector listaSector[],int tamSector )
{
	int id;
	int posicion;
	int retorno=-1;

	//llamo la mostrar todos para poder mostrar todo
	mostrarTodosNexo(lista, tamSector, listaSector, tamSector);
	//pedri id
	id=obtenerRango("Selecione la id: ", 1, 5000);
	//lo que tenemos que fijar si esa id la podemos econtrar en nuestra lista de empleados
	posicion=buscarPosicionPorIdEmp(lista, tamSector, id);
	//esto es si la econtro lo da de baja
	if(posicion!=-1)//econtro
	{
		//aca es si mi lista en posicion econrada le asigno isEmpty y le pongo libre si quedaria eliminado
		lista[posicion].isEmpty=LIBRE;
		retorno=0;
	}
	else//no se econtro
	{
		retorno=-2;
	}

	return retorno;


}

*/
int bajaNexo(eSector listaSector[],int tamSector,int id )
{
	int retorno=-1;

	if(listaSector!=NULL && tamSector)
	{
		for(int i=0;i<tamSector;i++)
		{
		  retorno=i;
		  break;
		}
	}
	return retorno;
}

