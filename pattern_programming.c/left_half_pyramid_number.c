#include <stdio.h>

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i = 1; i<=n ; i++){

        for(int a = 1; a<=i; a++){
        printf("%d", a);
    } 
    
    printf("\n");

    }


    return 0;
}