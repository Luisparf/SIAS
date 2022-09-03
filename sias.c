#include "sias.h"

/**** IAS ****/

int main(int argc, char *argv[ ]){

printf("argv[1] = %s\n",argv[1]);
printf("argv[3] = %s\n",argv[3]);
printf("argc: %d\n\n", argc);

if(argc <= 4 || strcmp(argv[1],"-i") || strcmp(argv[3],"-c")){
	printf("Ops! Algo errado com a entrada de argumentos!\n");
	printf("$ ./sias -i [arquivo de entrada] -c [log de saída]\n");
	return 1;
}


for (size_t i = 0; i < argc; i++){
	printf("argv[%ld] = %s\n", i, argv[i]);
}


printf("\n\n");

	

return 0;

}