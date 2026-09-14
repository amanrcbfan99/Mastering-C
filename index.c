# include <stdio.h>
int main() {

    int numone;
    printf("Enter first number : "  );
    scanf("%d", &numone);

        int numtwo;
    printf("Enter first number : "  );
    scanf("%d", &numtwo);

    int numthree;
    printf("Enter third number : "  );
    scanf("%d", &numthree);

    int avg = (numone + numtwo + numthree)/3;
    printf("%d", avg);

return 0;
}