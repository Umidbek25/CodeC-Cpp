// #include<stdio.h>
// #include<conio.h>

// #define PI 3.14 
// /* void means no data type */
// void area(int);

// /* Main() Function section or declaration part */
// main()
// {
//     int radius;
//     printf("Enter Radius of Circle");
//     scanf("%d", &radius);
//     area(radius);
// }
// /* Subprogram Section */

// void area(int r)
// {float result;
// result = PI*r*r;
// printf("Area of Circle is %f", result);

// } 


// #include <stdio.h>
// int main()
// {printf("Hello world \n");

// return 0;


// }

// #include <stdio.h>
// int main()
// {
//     int testInteger;
//     printf("Inter an integer: ");
//     // %d(integer) is a format specifier or data type, scanf is for inputting numbers 
    
//     scanf("%d", &testInteger);
//     printf("Number = %d", testInteger);
//     return 0;
// }

// #include <stdint.h>
// int main()
// {
//     float num1;
//     double num2;
//     printf("Inter a number: ");
//     scanf("%f", &num1);
//     printf("Enter another number: ");
//     scanf("%lf", &num2);
//     printf("num1 = %f\n", num1);
//     printf("num2 = %lf", num2);
//     return 0;
// }

// #include <stdint.h>

// int main()
// {
//     float number1 = 34.6;
//     double number2 = 356.7;
//     printf("number1 = %f\n", number1);
//     printf("number2 = %lf", number2);
//     return 0;
// }

// #include <stdint.h>
// int main()
// {
//     char chr = 'A';
//     printf("chr = %c.", chr);
//     return 0;
// }

// #include <stdint.h>
// int main()
// {
//     int test;
//     printf("Inter an integer: ");
//     scanf("%d", &test);
//     printf("Number = %d", test);
//     return 0;
// }
// sum of two numbers
// #include <stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     printf("Enter numbers: ");
//     scanf("%d %d", &num1, &num2);
//     sum = num1 + num2;
//     printf("%d + %d = %d", num1, num2, sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    if (-1L << 1UL) printf("a");
    if (-1L < 1UL) printf("b");
    if (-1L == 1UL) printf("c");
    if (-1L > 1UL) printf("d");
    if (-1L >> 1UL) printf("e");
    return 0;
}
    