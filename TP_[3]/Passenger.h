/*
 * Passenger.h
 *
 *  Created on: 19 may. 2022
 *
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

typedef struct
{
	int id;
	char nombre[50];
	char apellido[50];
	float precio;
	char codigoVuelo[15];
	int tipoPasajero;
	int flightstatus;
	int isEmpty;

}Passenger;

Passenger* Passenger_new();

Passenger* Passenger_newParametros(char* idStr,char* nombreStr,char* apellido,char* precio,char* codigoDeVuelo,char* tipoPasajeroStr,char* estadoDeVuelo,int data[]);

void Passenger_delete();

int Passenger_setId(Passenger* this,int id);
int Passenger_getId(Passenger* this,int* id);

int Passenger_setNombre(Passenger* this,char* nombre);
int Passenger_getNombre(Passenger* this,char* nombre);

int Passenger_setApellido(Passenger* this,char* apellido);
int Passenger_getApellido(Passenger* this,char* apellido);

int Passenger_setCodigoVuelo(Passenger* this,char* codigoVuelo, char* estadoDeVuelo);
int Passenger_getCodigoVuelo(Passenger* this,char* codigoVuelo,  char* estadoDeVuelo);

int Passenger_setTipoPasajero(Passenger* this,int tipoPasajero);
int Passenger_getTipoPasajero(Passenger* this,int* tipoPasajero);

int Passenger_setPrecio(Passenger* this,float precio);
int Passenger_getPrecio(Passenger* this,float* precio);



#endif /* PASSENGER_H_ */
