#include <stdio.h>
#include "upperSnakeCase.c"

char* KebabCase(char* t){
	char* text = malloc(sizeof(char));

	for (int i = 0; i < len(t); i++){
		text[i] = t[i];
		if(text[i] == 32){
			text[i] = 45;
		}
	}

	return text;
}

