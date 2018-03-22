#include <stdio.h>

long getint(void); /*It prompts user to enter an integer, which it returns*/

int getcount(long); //finds the number of digits in a number


/* Main program */
int main (void) {
  long x;

  x = getint();
  printf("The number entered is %ld\n", x);
  
  printf("There are %d digits in %ld\n", getcount(x),x);

}

long getint(void) {
  long a;

  printf("Please enter an integer > ");
  scanf("%ld", &a);
  return(a);
}

int getcount(long a){

	int count = 1;
	
	while ( a > 10){
		a = a/10;
		
		count = count + 1;
		
	}
	
	return(count);

}
