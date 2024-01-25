#include <stdio.h>

int main(void){
	int f;
	char line[] = "Hello, World\n";
	FILE *p = fopen("example.txt", "w");
	printf("%s", line);
	f = getc(p);
	fclose(p);

	FILE *j = fopen("example.txt", "r");
	while((line == getc(j)) != NULL){
		printf("%s", line);
	}
	fclose(j);
}
// I got guidance from the textbooks given on teams.  
