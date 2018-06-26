#include <stdio.h>

int main()
{
	int num_of_neighbors;
	printf("Input number of neighbors of Pupeta at present: ");
	scanf("%d", &num_of_neighbors);

	if (num_of_neighbors < 0 || num_of_neighbors > 8){
		printf("Invalid number of neighbors\n");
	}
	else if(num_of_neighbors == 0){
		printf("Sad and will force you to listen to his story, will make you late.\n");
	}
	else if(num_of_neighbors == 1){
		printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late");
	}
	else if(num_of_neighbors >= 2 && num_of_neighbors <= 5){
		printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely\n");		
	}
	else if(num_of_neighbors == 6 || num_of_neighbors == 8){
		printf("Too angry and furious, deliver the pizza and leave ASAP. \n");
	}
	else {  // do not need to check with if, as only option left is 7
		printf("He will be making great drink for his neighbors and will invite you to taste. But will not give you tip.\n"); 
	}
	

	return 0;
}