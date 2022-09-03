#include "sias.h"



int main(){

	
	FILE *f = fopen("arq.txt", "r+b");
	DATA *d = (DATA*)malloc(sizeof(DATA));
	int op = 20, size = 0;

	if(d == NULL){
		printf("\nUnable to malloc\n");
		getchar();
	}

	if(f == NULL){
		printf("ARQUIVE ERROR\n");
		printf("CREATING ARQUIVE...\n");
		FILE *f = fopen("arq.txt", "w+b");

	}

	while(op != 0){

		system("clear || cls");

		printMemoryData(d, size);

		printf("\nOPTIONS:\n");
		printf("PRESS<1> to Insert product;\n");
		printf("PRESS<2> to Remove product by code;\n");
		printf("PRESS<3> to General report;\n");
		printf("PRESS<0> to Exit and persist data on arquive;\n");

		printf("\nChoose: ");
		scanf("%i", &op);


		switch(op){

			case 1: system("clear || cls"); op1(&d, &size); break;
			case 2: system("clear || cls"); op2(&d, f, size); break;
			case 3: system("clear || cls"); op3(d, f, size); break;
			case 0: system("clear || cls"); op4(d, f, size); break;
		}
	}

	
	

return 0;

}