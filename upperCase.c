#include <stdio.h>
#include "lowerCase.c"

char* UpperCase(char * t){
	char * text = malloc(sizeof(char));
	
	for (int i = 0; i < len(t); i++){
		text[i] = t[i];
		if(text[i] >= 92 && text[i] <= 122){
			text[i] -= 32;
		}
	}

	return text;
}
