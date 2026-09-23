#include <stdio.h>

int main(){

    int n ;
    printf("Enter the number of row and column : ");
    scanf("%d", &n);
    for(int a = 1; a<=n; a++){

        for(int i=1; i<=n; i++){

        printf("%d", i);
        
    }
    printf("\n");
    }


    return 0;
}