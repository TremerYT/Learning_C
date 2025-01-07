#include "main.h"

char *str_concat(char *s1, char *s2){
	int i, len1 = 0, len2 = 0;
	char *ptr;

	while(s1[len1]){
		len1++;
	}

	while (s2[len2]){
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL){
		return NULL;
	}

	for (i = 0; i < len1; i++){
		ptr[i] = s1[i];
	}

	for (i = 0; i < len2; i++){
		ptr[len1 + i] = s2[i]; 
	}

	ptr[len1 + i] = '\0';

	return ptr;
}