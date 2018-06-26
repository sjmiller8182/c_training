#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.
	printf("****** Welcome to the ABC Power Supply Company *******\n");
	printf("Input Unit Consumed: ");
	scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units > 100 && units <= 250){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	

		bill_amount = 0.2 * 100;   // this is for first 100 units
		// Now add the bill for 100 units with the rest of the bill for >100 units @0.5
		// the remaining units are (units - 100).		
		bill_amount = bill_amount + 0.5 * (units - 100);  
	}
	else if(units > 250 && units <= 500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = 0.2 * 100;   // this is for first 100 units
		bill_amount = bill_amount + 150 * 0.5; // this is for next 150 units
		// now remaining units that is (units - 250) should be charged @0.75
		bill_amount = bill_amount + (units - 250) * 0.75;
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)

		bill_amount = 0.2 * 100;   // this is for first 100 units
		bill_amount = bill_amount + 150 * 0.5; // this is for next 150 units		
		bill_amount = bill_amount + 250 * 0.75; // this is for next 250 units
		// now remaining units that is (units - 500) should be charged @1.0
		bill_amount = bill_amount + (units - 500) * 1.0;	

	}
	
	// finally print the bill amount here
	if (units >= 0){  // we should check for invalid units, if units is negative,
				// we must not print any bills.
		printf("Total bill: $%0.2lf for %d units\n", bill_amount, units);
		printf("Thank you!");
	}
	// Notice that I have used %0.2lf, now that will round off the value in 2 places 
	// after the decimal point, so to round off for 3 places you should use %0.3lf.
	
	return 0;
}