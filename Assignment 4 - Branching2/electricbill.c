#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.


	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	
	}
	else if(){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	// invalid that is negative then no bill should be printed. **

	return 0;
}