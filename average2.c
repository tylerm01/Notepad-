/* This is a C program where you find the average of two numbers.
   The two numbers are entered by user */

#include<stdio.h>


int main (void){
  /* declare two integer variables x and y */
  int x, y;
  
  /* declare another variable which contains the average of x and y */
  double z;
  
  /* Ask user to enter the values of x */
  printf("Please enter the values of x: ");
  scanf("%d", &x);
  
  /* Ask user to enter the values of y */
  printf("\nPlease enter the values of y:");
  scanf("%d", &y);
  
  /* Calculate the average and store it in z */
  z = 0.5 * (x + y );
  
  /* print output */
  printf ("The average of %d and %d is %lf\n", x, y, z);

  return 0;
}