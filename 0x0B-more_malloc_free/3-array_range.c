#include "main.h"

int *array_range(int min, int max){
	int *ptr, i;

	if (min > max){
		return NULL;
	}

	ptr = malloc(sizeof(int) * (max - min));

	for(i = 0; i <= (max - min); i++){
		ptr[i] = i;
	}

	return ptr;
}