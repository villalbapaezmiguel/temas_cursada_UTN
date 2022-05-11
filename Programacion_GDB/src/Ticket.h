/*
 * Ticket.h
 *
 *  Created on: 2 may. 2022
 *      Author: miguel
 */

#ifndef TICKET_H_
#define TICKET_H_


#include <stdio_ext.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idDestino;
    char pais[20];
    char ciudad[20];
    int duracion;
}eDestino;


typedef struct
{
	int codigo;//Campos o atributos
	char nombre[20];
	char apellido[20];
	int horarioSalida;
	int horarioLlegada;
	int idDestino;
	int estado;
}eTicket;


void MostrarUnTicket(eTicket unTicket);
eTicket PedirDatosTicket(eDestino listaDestino[], int tamDestino);//Devuelve el ticket por valor
void InicializarTickets(eTicket lista[]);
int BuscarEspacioLibre(eTicket listaTickets[], int tam);
int CargarUnTicketEnLista(eTicket listaTickets[], int tam, eDestino listaDestino[], int tamDestino);
void MostrarListadoTickets(eTicket listaTickets[], int tam);


#endif /* TICKET_H_ */
