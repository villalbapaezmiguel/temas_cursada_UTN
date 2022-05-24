#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Passenger.h"

/****************************************************
    Menu:
     1. Cargar los datos de los pasajeros desde el archivo data.csv (modo texto).
     2. Cargar los datos de los pasajeros desde el archivo data.csv (modo binario).
     3. Alta de pasajero
     4. Modificar datos de pasajero
     5. Baja de pasajero
     6. Listar pasajeros
     7. Ordenar pasajeros
     8. Guardar los datos de los pasajeros en el archivo data.csv (modo texto).
     9. Guardar los datos de los pasajeros en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/




int main()
{
    int option = 0;

    LinkedList* listaPasajeros = ll_newLinkedList();

    Passenger* p1 = Passenger_newParametros("100", "Pepe", "VIP");
    Passenger* p1 = Passenger_newParametros("100", "Moni", "VIP");
    Passenger* p1 = Passenger_newParametros("100", "Coqui", "regular");
    Passenger* p1 = Passenger_newParametros("100", "Paola", "REGULAR");



//    do{
//        switch(option)
//        {
//            case 1:
//                controller_loadFromText("data.csv",listaPasajeros);
//                break;
//        }
//    }while(option != 10);
    return 0;
}

