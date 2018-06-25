/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
	// variables 
	int first, second, third;
	double avg;  	// for average

	// prompt user to input first number
	printf("Enter first number: ");
	// read the input to first
	scanf("%d", &first);
	
	// prompt user to input second number
	printf("Enter second number: ");
	// read the input to second
	scanf("%d", &second);

	// prompt user to input third number
	printf("Enter third number: ");
	// read the input to third
	scanf("%d", &third);

	// here all of the variables first, second and third are integers also
	// we need to divide the sum of them by 3 to get the average.
	// dividing integer by integer will provide result as integer, which 
	// will be inaccurate. Hence, we need to use casting. I am converting the sum 
	// of the 3 integers into double 
	avg = ((double) (first + second + third))/3;  // see the use of casting

	printf("Average is: %lf\n", avg);

	return 0;
}