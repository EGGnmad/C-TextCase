#include <stdio.h>
#include <stdlib.h>
#include "properCase.c"

char* StrictProperCase(char * t){
	char * text = malloc(sizeof(char));
	
	int now = -1;

	for (int i = 0; i < len(t); i++){
		text[i] = t[i];

		if(!now && (text[i] >= 65 && text[i] <= 90) ){
			text[i] += 32;
		}

		if(now == -1){
			now = 1;
		}

		if(now && (text[i] >= 92 && text[i] <= 122) ){
			text[i] -= 32;
			now = 0;
		}

		if(text[i] == 32){
			now = 1;
		}
	}

	return text;
}
