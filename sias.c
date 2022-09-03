#include "sias.h"

int main(int argc, char *argv[ ]){

printf("argc: %d\n\n", argc);

for (size_t i = 0; i < argc; i++){
	printf("argv[%ld] = %s\n", i, argv[i]);
}


printf("\n\n");

	

return 0;

}