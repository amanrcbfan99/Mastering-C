#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of row and column : ");
    scanf("%d", &n);
    for(int a = n; a>=1; a--){

        for(int i=1; i<=a; i++){

        printf("*  ");
        
    }
    printf("\n");
    }


    return 0;
}