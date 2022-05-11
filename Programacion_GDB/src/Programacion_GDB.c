/*
 ============================================================================
 Name        : Programacion_GDB.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <ctype.h>

#include "Ticket.h"

#define CANT 10


int main(void) {
	setbuf(stdout, NULL);
	eTicket listaTickets[CANT];
	eDestino listaDestino[3] = {{12,"EEUU","Miami",12},{10,"España","Barcelona",14},{9,"Francia","Paris",16}};
	int auxCodigo;
	int retorno;

	//
	int i;
	int opcion;
	int flag = 0;
	int cantidadDatos = 0;
	int cantidadCodigo = 0;
	int opcionModificar;
	char confirmar;

	//inicializamos los estados en cero
	for( i=0; i<CANT; i++ )
	{
		listaTickets[i].estado = LIBRE;
	}

	InicializarTickets(listaTickets);
	cantidadDatos = 5;

	do{
		printf("1. Alta");
		printf("\n2. Baja");
		printf("\n3. Modificar");
		printf("\n4. Listar");
		printf("\n5. Buscar dato");
		printf("\n6. Salir");
		printf("\nOpcion: ");
		scanf("%d", &opcion);

		switch(opcion){
			//Alta
			case 1:
			    retorno = CargarUnTicketEnLista(listaTickets, CANT, listaDestino,3);
			    switch(retorno)
			    {
			        case -1:
			            printf("No hay espacio!!!!");
			        break;
			        default:
			            printf("Ticket cargado!!!");
			            cantidadDatos++;
			        break;
			    }
			break;

			//Baja
			case 2:
				if( cantidadDatos > 0 ){
					printf("Código a borrar:" );
					scanf("%d", &auxCodigo);

					for( i=0; i<CANT; i++ ){
						if( listaTickets[i].codigo == auxCodigo && listaTickets[i].estado == 1 ){
							MostrarUnTicket( listaTickets[i] );
							printf( "Dar de baja? [S|N]:" );
							scanf("%c", &confirmar);
							confirmar = toupper( confirmar );
							if( confirmar == 'S' ){
								listaTickets[i].estado = -1;
								cantidadDatos--;
								printf( "Los datos han sido borrados..." );
							}
							else{
								printf( "Los datos no han sido borrados..." );
							}
							break;
						}
					}
				}
				else{
					printf("No hay datos cargados...");
				}
				break;

			//Modificar
			case 3:
				if( cantidadDatos > 0 ){
					printf("Código a modificar:" );
					scanf("%d", &auxCodigo);

					for( i=0; i<CANT; i++ ){
						if( listaTickets[i].codigo == auxCodigo && listaTickets[i].estado == 1 ){
							do{
								printf("Menu Modificar");
								printf("1. C%cdigo", 162);
								printf("2. Nombre");
								printf("3. Apellido");
								printf("4. Horario de salida");
								printf("5. Horario de llegada");
								printf("6. Salir");
								printf("Opci%cn", 162);
								scanf("%d", &opcionModificar);

								switch( opcionModificar ){
									case 1:
										printf("C%cdigo: ", 162);
										scanf("%d", &listaTickets[i].codigo);
										break;
									case 2:
										printf("Nombre: ");
										fflush(stdin);
										scanf("%[^\n]", listaTickets[i].nombre);
										break;
									case 3:
										printf("Apellido: ");
										fflush(stdin);
										scanf("%[^\n]", listaTickets[i].apellido);
										break;
									case 4:
										printf("Horario de salida: ");
										scanf("%d", &listaTickets[i].horarioSalida);
										break;
									case 5:
										printf("Horario de llegada: ");
										scanf("%d", &listaTickets[i].horarioLlegada);
										break;
									case 6:
										printf( "Saliendo del Men%c de Modificaci%cn", 163, 162 );
										break;
									default:
										printf( "La opci%cn ingresada es incorrecta...", 162 );
								}
							}while( opcionModificar != 6 );
							break;
						}
					}

				}
				else{
					printf("No hay datos cargados...");
				}
				break;
			//Listar
			case 4:
				if( cantidadDatos > 0 )
				{
				    MostrarListadoTickets(listaTickets,CANT);
				}
				else
				{
					printf("No hay datos cargados...");
				}
			break;

			//Buscar un dato
			case 5:
				if( cantidadDatos > 0 ){
					//buscar un dato dentro del vector
					flag = 0;

					printf("Ingrese c%cdigo a buscar: ", 162);
					scanf("%d", &auxCodigo);

					for( i=0; i<CANT; i++ ){
						if( auxCodigo == listaTickets[i].codigo && listaTickets[i].estado == 1 ){
							printf("Se encontro el dato");
							flag = 1;
							break;
						}
					}

					if( flag == 0 ){
						printf("El dato no se encontro");
					}
				}
				else{
					printf("No hay datos cargados...");
				}
				break;
			case 7://Mostrar con eDestino

			    for(int i=0; i<CANT; i++)//listaTickets
			    {
			        if(listaTickets[i].estado==OCUPADO)
			        {
			            for(int j=0; j<3; j++)//listaDestino
    			        {
    			            if(listaTickets[i].idDestino == listaDestino[j].idDestino)//match de fk(tickets)-pk(destinos)
    			            {
    			                printf("%4d %10s %10s %10s, %s %4d\n", listaTickets[i].codigo,
    			                                                    listaTickets[i].nombre,
    			                                                    listaTickets[i].apellido,
    			                                                    listaDestino[j].ciudad,
    			                                                    listaDestino[j].pais,
    			                                                    listaDestino[j].duracion
    			                                                    );
    			                 break;
    			            }

    			        }
			        }
			     }
			break;
			case 8:
			    for(int i=0; i<3; i++)//destinos
			    {
			        printf("%s %s\n", listaDestino[i].ciudad, listaDestino[i].pais);
			        for(int j=0; j<CANT; j++)//tickets
			        {
			            if(listaTickets[j].estado==OCUPADO && (listaDestino[i].idDestino == listaTickets[j].idDestino))
    		            {
    		                printf("\t->%10s %10s %4d\n", listaTickets[j].nombre,
    		                                            listaTickets[j].apellido,
    		                                            listaTickets[j].horarioSalida);
    		            }

			        }
			    }
			break;

			case 9://Porcentaje que representa cada de destino en funcion del total de tickets



				break;
			default:
				printf("La opci%cn %c no es v%clida", 162, opcion, 160);
		}
		printf("\n\n");

	}while( opcion != 6 );




	return EXIT_SUCCESS;
}

