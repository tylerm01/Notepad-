//Problem: write a program to add to whole numbers and display the sum

/*

Psudocode

Declare 2 variables for storying two integers
Declare the sum variable to store the sum
Assign the two integers to the integer variables
Perform the addition and assign the sum in the sum variable
Display the result on the terminal

*/



#include <stdio.h>

int main(void) {

	//Declare two variables for storing two integers

	int firstInteger;
	int secondInteger;
	
	//Declare the sum variable to store the sum
	
	int sum;
	
	//Assign the two integers to the integer variables
	
	firstInteger = 100;
	secondInteger = 50;
	
	//Perform the addition and assign the sum in the sum variable
	
	sum = firstInteger + secondInteger;

	//Display the result on the terminal
	
	printf("The sum is %d\n", sum);

	return 0;
}

