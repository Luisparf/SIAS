#ifndef SIAS_H
#define SIAS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct 
{
	char descr[50];
	int qt, cod;

}DATA;

void flush_in();

void pressEnter();

void bubble(DATA **, int size);

int codCompare (const void *x, const void *y);

int searchProductMem(DATA *d, int cod, int size);

void insertData(DATA **d, int cod, int qt, int *size, char descr[]);

void removeProductMemory(DATA **d, int size, int cod, int qt);

void printMemoryData(DATA *d, int size);

void persistData(DATA *d, FILE *f, int size);

void printArquiveData(FILE *f);

void removeProductFile(FILE *f, int cod, int qt);

int get_size(FILE *f);

void unavailableProducts(FILE *f);


#endif