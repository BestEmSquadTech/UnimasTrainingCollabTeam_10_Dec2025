#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 13;
    int b = 10;
    printf("Simple Calculator\n");

    printf("a + b = %d\n", add_func(a,b));
    printf("a - b = %d\n", sub_func(a,b));
    printf("a * b = %d\n", mul_func(a,b));
    printf("a / b = %d\n", div_func(a,b));

    return 0;


}
