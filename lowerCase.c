#include <stdio.h>
#include <stdlib.h>
#include "len.c"

char* LowerCase(char* t){
	char* text = malloc(sizeof(char));
	
	for (int i = 0; i < len(t); i++){
		text[i] = t[i];
		if(text[i] >= 65 && text[i] <= 90){
			text[i] += 32;
		}
	}

	return text;
}

int main(){
	printf("%s", LowerCase("MY NAME IS BYEONG HOON LEE"));
	return 0;
}
