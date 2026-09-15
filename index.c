# include <stdio.h>
int main() {

    // int number;
    int a = 10;
    int b = 20;
    int temp ;

    temp = a;
    a = b;
    b = temp;


    printf("%d %d\n", a, b);


return 0;
}