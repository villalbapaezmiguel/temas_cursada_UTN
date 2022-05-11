/*
 * Ticket.c
 *
 *  Created on: 2 may. 2022
 *      Author: miguel
 */


#include "Ticket.h"

void InicializarTickets(eTicket lista[])
{
    eTicket carga[]={
                        {10,"German","Scarafilo",10,12,9,OCUPADO},
                        {11,"Harry","Martin",02,06,12,OCUPADO},
                        {12,"Gianni","Maggiori",06,15,12,OCUPADO},
                        {13,"Raffi","kocak",03,11,10,OCUPADO},
                        {14,"David","Fernandez",13,18,9,OCUPADO}
                    };

    for(int i = 0; i<5; i++)
    {
        lista[i] = carga[i];
    }
}

int BuscarEspacioLibre(eTicket listaTickets[], int tam)
{
    int index;
    index = -1;
    for(int i=0; i<tam; i++)
    {
       if(listaTickets[i].estado==LIBRE)
       {
           index = i;
           break;
       }
    }

    return index;
}



int CargarUnTicketEnLista(eTicket listaTickets[], int tam, eDestino listaDestino[], int tamDestino)
{
   int index;

   index = BuscarEspacioLibre(listaTickets, tam);
   if(index!=-1)
   {
       listaTickets[index] = PedirDatosTicket(listaDestino,tamDestino);
   }

   return index;
}

eTicket PedirDatosTicket(eDestino listaDestino[], int tamDestino)
{
	eTicket miTicket;

	printf("Ingrese codigo de vuelo: ");
	scanf("%d", &miTicket.codigo);

	printf("Ingrese el  nombre del pasajero: ");
	__fpurge(stdin);
	scanf("%[^\n]", miTicket.nombre);

	printf("Ingrese el  apellido del pasajero: ");
	__fpurge(stdin);
	scanf("%[^\n]", miTicket.apellido);

	printf("Ingrese horario de salida del vuelo: ");
	scanf("%d", &miTicket.horarioSalida);

	printf("Ingrese horario de llegada del vuelo: ");
	scanf("%d", &miTicket.horarioLlegada);

	printf("DESTINOS:\n");

	for(int i=0; i<tamDestino; i++)
	{
	    printf("%d) %d %s %s\n",i+1, listaDestino[i].idDestino, listaDestino[i].ciudad, listaDestino[i].pais);
	}
	printf("Seleccione un pais: ");
	scanf("%d", &miTicket.idDestino);//1000 - 1005 - 1010

	miTicket.estado = OCUPADO;

	return miTicket;
}

void MostrarUnTicket(eTicket unTicket)
{
	printf("%4d %10s %10s %4d %4d %14d\n", unTicket.codigo,
	                                  unTicket.nombre,
	                                  unTicket.apellido,
	                                  unTicket.horarioSalida,
	                                  unTicket.horarioLlegada,
	                                  unTicket.idDestino);
}

void MostrarListadoTickets(eTicket listaTickets[], int tam)
{
	for(int i=0; i<tam; i++ )
	{
		if(listaTickets[i].estado == OCUPADO)
		{
			MostrarUnTicket(listaTickets[i]);
		}
	}
}




