#include <stdio.h>
#include "lowerSnakeCase.c"

char* UpperSnakeCase(char* t){
	char* text = malloc(sizeof(char));

	text = UpperCase(t);

	for (int i = 0; i < len(t); i++){
		if(text[i] == 32){
			text[i] = 95;
		}
	}

	return text;
}