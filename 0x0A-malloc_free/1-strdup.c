#include "main.h"

char *_strdup(char *str){
	int i, len = 0;
	char *ptr;

	if (str == NULL){
		return NULL;
	}

	while(str[len]){
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL) {
    	return NULL;
	}


	for(i = 0; str[i] != '\0'; i++){
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return ptr;
}