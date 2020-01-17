/* This is a C program where you find the average of two numbers.
   The two numbers are hard-coded in your program. */

#include<stdio.h>


int main (void){
  /* declare two integer variables x and y */
  int x, y;
  
  /* declare another variable which contains the average of x and y */
  double z;
  
  /* Assign values to x and y */
  x = 10;
  y = 20;
  
  /* Calculate the average and store it in z */
  z = 0.5 * (x + y );
  
  /* print output */
  printf ("The average of %d and %d is %lf\n", x, y, z);
  
  return 0;

}

   