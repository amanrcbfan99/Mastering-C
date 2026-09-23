#include <stdio.h>

int main(){

    int number;
    printf("Enter number of stars in each row and column : ");
    scanf("%d", &number);

    for(int i = 1; i<=number; i++){

        for(int a = 1; a<=number; a++){

            printf("*");
        }

        printf("\n");
    }


return 0;

}