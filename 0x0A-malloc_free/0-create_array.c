#include "main.h"


char *create_array(unsigned int size, char c){
	char *ptr;
    unsigned int i;

	if (size == 0){
		return NULL;
	}

	ptr = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++) {
		ptr[i] = c;
	}

	free(ptr);

	return ptr;
}