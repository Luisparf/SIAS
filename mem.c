#include "mem.h"



void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

/*

//=======================================================================================================================================

void pressEnter(){

	printf("\nPRESS <ENTER> TO RETURN TO MAIN MENU ");
	getchar();
}

//=======================================================================================================================================

int searchProductMem(DATA *d, int cod, int size){

	for (int i = 0; i < size; ++i)
	{
		if(d[i].cod == cod)
			return i;
	}

	return -1;
}

//=======================================================================================================================================

int codCompare (const void *x, const void *y) {
    int first = (*((DATA *)x)).cod;
    int second  = (*((DATA *)y)).cod;
    return (first - second);
}

//=======================================================================================================================================

void insertData(DATA** d, int cod, int qt, int *size, char descr[]){

	int index = searchProductMem(*d, cod, *size);

	if(index != -1){
		(*d)[index].qt += qt;
		return;
	}

	DATA *temp = (DATA*)malloc(sizeof(DATA));
		 temp = (DATA*)realloc(*d, (  ((*size)+1) * sizeof(DATA)));

	if(!temp || temp == NULL){

		printf("\nREALLOCATION FAILED!\n");
		pressEnter();
		
	}else{
		*d = temp;
	}
	free(temp);
	//	printf("\n\nSIZE: %i\n\n", *size);
	
	(*d)[*size].cod = cod;
	(*d)[*size].qt = qt;
	strcpy((*d)[*size].descr, descr);

	(*size)++;
	
	qsort(*d, *size, sizeof(DATA), codCompare);	

	//printMemoryData(*d, *size);
	//getchar();
	
}

//=======================================================================================================================================

void printMemoryData(DATA *d, int size){

	if(size == 0)
		return;
	
	//printf("Struct size = %i\n", size);
	printf("\nUnpersisted data:\n\n");


	for (int i = 0; i < size; ++i)
	{
		printf("[%i] Code:%i\tDescription:%s\tQuantity: %i\n", i, d[i].cod, d[i].descr, d[i].qt);
	}

	printf("\n=====================================================\n\n");
	//getchar();
}

//=======================================================================================================================================

void removeProductMemory(DATA **d, int size, int cod, int qt){

	if(size == 0){
		printf("\nEmpty struct!\n");
		pressEnter();
		getchar();
	
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		if((*d)[i].cod == cod)
		{
			(*d)[i].qt -= qt;
			return;
		}
	}

	printf("\nProduct %i not found!\n", cod);

}


*/