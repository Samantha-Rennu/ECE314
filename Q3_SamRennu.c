#include <stdio.h>
#include <string.h>

void getreverse(char *); //reverse string entered


/* Main program */
int main (void) {

	char userEntered[50];
	
	printf("Please enter a value to be reversed: ");
	scanf("%s", userEntered);
	
	getreverse(userEntered);

}

void getreverse(char * a) {

	char reversedA[strlen(a)];
	char partOfA[2];
	int count = strlen(a);
	int startCount;
	
	for ( startCount = count - 1; startCount >= 0; startCount = startCount - 1 ){
		partOfA[0] = a[startCount];
		strcat( reversedA, partOfA); 
		
	}

	printf("The reverse of entered value is: %s\n", reversedA);

}
