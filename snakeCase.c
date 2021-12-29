#include <stdio.h>
#include "strictProperCase.c"

char* SnakeCase(char* t){
	char* text = malloc(sizeof(char));

	for (int i = 0; i < len(t); i++){
		text[i] = t[i];
		if(text[i] == 32){
			text[i] = 95;
		}
	}

	return text;
}