# include <stdio.h>
int main() {

    int number;
    printf("Enter three digit number : ");
    scanf("%d", &number);
    if((number/10) > (number%10)){
        printf("Tens digit is greater");
    } else if ((number/10) == (number%10))
    {
        printf("Both are same");
    }
    else {
        printf("Unit digit is greater");
    }
    


return 0;
}