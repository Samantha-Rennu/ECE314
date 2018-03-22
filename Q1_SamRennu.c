#include <stdio.h>

int getint(void); /*It prompts user to enter an integer, which it returns*/

void geteven( int x, int y, int z); // figures out if any are even


/* Main program */
int main (void) {
  int x;
  int y;
  int z;

  x = getint();
  y = getint();
  z = getint();
  printf("The numbers entered are %d, %d, and %d\n", x, y, z);

  geteven(x, y, z);
}

int getint(void) {
  int a;

  printf("Please enter an integer > ");
  scanf("%d", &a);
  return(a);
}

void geteven( int x, int y, int z) {

  int xEven = 0;
  int yEven = 0;
  int zEven = 0;

  //find even numbers
  if( x % 2 == 0)
		xEven = 1;
  if( y % 2 == 0)
		yEven = 1;
  if( z % 2 == 0)
		zEven = 1;

  //are any even
  if( xEven == 0 && yEven  == 0 && zEven == 0 )
		printf("None of these numbers are even");
  else {

		printf("The even number(s) is(are): ");

		if(xEven == 1) {printf("%d ", x);}
		if(yEven == 1) {printf("%d ", y);}
		if(zEven == 1) {printf("%d ", z);}
	}

  printf("\n");

}
