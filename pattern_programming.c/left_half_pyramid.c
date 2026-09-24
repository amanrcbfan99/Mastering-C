#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of row and column : ");
    scanf("%d", &n);
    for(int i = 1; i<=n ; i++){

        for(int a = 1; a<=n; a++){
        printf(" space ");
    } 
    
    printf("*");

    }


    return 0;
}