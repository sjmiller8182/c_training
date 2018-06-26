#include <stdio.h>
#include <math.h>
/**

When the program executes it will work in the following way:
You must accomplish all the menu options and validation checkings exactly as asked.

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 1
Enter number: -1
Invalid number for factorial

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 20
This program can find factorials only in the range 0 - 10

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3

*** Thank you ***

NOTE: You should use library function pow to find a^b, no need to write code
for finding a^b.

*/

int main(){
	int quit = 0;
	int n;  // n is the number for which you will find factorial
	int p;  // you are going to keep the factorial of n in p
	double base, exp, result; // for a^b

	int option; // for keeping the menu option
	while(!quit){
		// print the menu here
		printf("----MENU----\n");
		printf("1. Find factorial\n");
		printf("2. Find a^b\n");
		printf("3. Quit\n");
		printf("\n");
		printf("What do you want to do? ");
		// get the response into option variable.
		scanf("%d", &option);

		switch(option){
        // Now. you can use if-else to check the option and do needful
		// When option == 3, you need to do something with the variable quit, think
		// about that.
            case 3: quit = 1;
                    printf("*** Thank you! ***");
                    break;
        // When option == 1, you should read n and first check the validity,
		// if n < 0, a particular message has to be printed, when n > 10, another
		// message has to be printed (see the expected output above), if n is valid
		// write a while loop to calculate the factorial and print it, becareful about
		// the initial value of p.
            case 1: printf("Enter number: ");
                    scanf("%d", &n);
                    if (n < 0)
                        printf("Invalid number for factorial!\n");
                    else if (n > 10)
                        printf("This program can find factorials only in the range 0 - 10.\n");
                    else{
                        p = 1;
                        result = 1;
                        while(p <= n){
                            result = p * result;
                            p++;
                        }
                        printf("Factorial of %d is %0.0lf\n", n, result);
                    }
                    break;
		// for option == 2, read base and exponant then make a call to the pow function
		// print the return value using printf. You may declare a variable to hold the
		// result.
            case 2: printf("Enter a: ");
                    scanf("%lf", &base);
                    printf("Enter b: ");
                    scanf("%lf", &exp);
                    result = pow(base,exp);
                    printf("%0.0lf^%0.0lf = %0.1lf", base, exp, result);
                    break;

            default: printf("Not a valid menu option");

		}
        printf("\n");
	}


}
