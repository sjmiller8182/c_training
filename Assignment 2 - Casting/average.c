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

int main(){
    float average;
	int var1, var2, var3;
	printf("This program takes in 3 integers from the user and calculates the average.\n");
	printf("Enter a integer: ");
	scanf("%d", &var1);
	printf("Enter a integer: ");
	scanf(" %d", &var2);
	printf("Enter a integer: ");
	scanf("%d", &var3);

    average = ((float) var1 + var2 + var3) / 3;

    printf("The average of these numbers is: %f", average);
	// complete the program as per instructions.


	return 0;
}
