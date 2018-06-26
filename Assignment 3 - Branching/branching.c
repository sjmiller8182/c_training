#include <stdio.h>

int main(){
    int numNeighbors;
    printf("Please enter the number of Pupeta's neighbors: ");
    scanf("%d", &numNeighbors);

    if (numNeighbors < 0 || numNeighbors > 8) {
        printf("The number entered invalid. Please enter a number between 0 and 8.");
    }
    else{
        if (numNeighbors == 0){
            printf("Sad and will force you to listen to his story, will make you late.");
        }
        else if(numNeighbors == 1){
            printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.");
        }
        else if(numNeighbors == 7){
            printf("He will be making great drink for his neighbors and will invite you to taste.");
        }
        else if(numNeighbors == 6 || numNeighbors == 8){
            printf("Too angry and furious, deliver the pizza and leave ASAP.");
        }
        else{ // 2<= numNeighbors <=5
            printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.");
        }
    }
	return 0;
}
