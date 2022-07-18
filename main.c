#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int assemble_number(char number[50]){
	int length;
	int digits = 0;
	int assembled_number;
	for (length = 0; number[length] != '\0'; ++length)
	while (1 == 1){
		int test = 0;
		if (isdigit(number[test])){
			++digits;
			if (isdigit(number[test+1])){
				continue;
			}else{
				break;
			}
		} 
	}
	printf("%d",digits);
	return assembled_number;
}

int main(){
	char input[100];
	char PRINT_DEFAULT[4] = "%s\n";
	printf(PRINT_DEFAULT, "Enter your calculation (max length 100): ");
	while(1 == 1){
		scanf("%100[^\n]", input);
		int i;
		for (i = 0; input[i] != '\0'; ++i){
			if ('+' == input[i]){
				printf("%d %c\n",i,input[i]);
				assemble_number("423");
				//for (int xd = 0; )
			}
		}
	break;
	}
	return 0;
	
}
