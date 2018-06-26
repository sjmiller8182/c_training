#include <stdio.h>
#include <math.h>

int main(){

    int quit = 0, i = 0, j = 0;
    float input, arr1[20], arr2[20], sum1=0, sum2=0;

    while(!quit){
        printf("Enter a number: ");
        scanf("%f", &input);
        if (input == 0.0 || input >= 20)
            quit = 1;
        else{
            arr1[i] = input;
            i++;
        }
    }
    printf("\n");
    printf("There are %d numbers in this iteration\n", i);
    printf("\n");
    if (i > 0){
        printf("Input Array    2nd Array\n");
        for(j=0;j<i;j++){
            if (j%2 == 0)
                arr2[j] = arr1[j] * 2;
            else
                arr2[j] = cbrt(arr1[j]);
            printf("%11f    %10f\n", arr1[j], arr2[j]);
            sum1 += arr1[j];
            sum2 += arr2[j];

        }
        printf("Sum1: %f Sum2: %f\n", sum1, sum2);

    }

    return 0;
}
