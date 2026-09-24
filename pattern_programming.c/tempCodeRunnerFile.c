#include <stdio.h>

int main(){

    int n ;
    printf("Enter the number of row and column : ");
    scanf("%d", &n);
    for(int a = 1; a<=n; a++){

        for(int i=1; i<=a; i++){

        printf("*  ");
        
    }
    printf("\n");
    }


    return 0;
}