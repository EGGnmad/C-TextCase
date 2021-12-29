#include <stdio.h>
#include "kebabCase.c"

char* LowerKebabCase(char* t){
	char* text = malloc(sizeof(char));

	text = LowerCase(t);

	for (int i = 0; i < len(t); i++){
		if(text[i] == 32){
			text[i] = 45;
		}
	}

	return text;
}
