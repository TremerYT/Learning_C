#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n){
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL){
		s1 = "";
	}

	if (s2 == NULL){
		s2 = "";
	}

	while(s1[len1]){
		len1++;
	}

	while(s2[len2]){
		len2++;
	}

	if (n >= len2){
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}

	for(i = 0; i < len1; i++){
		ptr[i] = s1[i];
	}

	for(i = 0; i < n; i++){
		ptr[len1 + i] = s2[i];
	}

	ptr[len1 + i] = '\0';

	return ptr;
}