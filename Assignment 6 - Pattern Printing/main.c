#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter how many lines: ");
    scanf("%d", &n);
    printf("Pattern 1: \n");
    for(i = n; i > 0; i--){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 2: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = n; i > 0; i--){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 3: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d\t", i);
        }
        printf("\n");
    }
    printf("Pattern 4: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    printf("Pattern 5: \n");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d\t", (i+j) % 2);
        }
        printf("\n");
    }
}
