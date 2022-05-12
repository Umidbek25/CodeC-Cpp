// #include <stdio.h>
// int main()
// {
//     int a  = 21;
//     int b = 10;
//     int c ;
//     c= a + b;
//     printf("Line 1  - Value of is %d\n", c );
//     c = a*b;
//     printf("Line 2 - Value of c is %d\n", c );
//     c = a / b;
//     printf("Line 4 - Value of c is %d\n", c );
//     c = a % b;
//     printf("Line 5 - Value of c is %d\n", c);
// }

// ++a - incrementing value of a to increases by 1
// ++a, a=5 -> a = 6
// --a, a=5, -> a = 4
// a++, a=5, -> a = 5
// a--, a=5, -> a = 5

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 100;
//     float c = 10.5, d = 100.5;
//     printf("++a = %d\n", ++a);
//     printf("--b = %d\n", --b);
//     printf("c++ = %f\n", c++);
//     printf("d-- = %f\n", d--);
//     return 0;
// }

// 0 is false, 1, 3, 4, = true
// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10;
//     printf("%d > %d is %d", a, b, a >b);
//     return 0;
// }

// #include <stdint.h>
// int main()
// {
//     int a = 5, b = 5, c = 10, result;
//     result = (a == b) && (c > b);
//     printf("(a == b) && (c>b) is %d\n ", result);
//     return 0;
// }
// #include <stdio.h>
// int main()
// /* 60 = 0011 1100 */
// /* 13 = 0000 1101 */
// {
//     unsigned int a = 60;
//     unsigned int b = 13;
//     int c;
//     c = a << 2;  /* 240 = 1111 0000*/
//     printf("Line 4 - Value of c is %d\n", c);
//     c = a >> 2;  /* 15 = 000011118*/
//     printf("Line 6  - Value of c is %d\n", c);

// }
// #include <stdio.h>
// int main()
// {
//     int a = 5, c;
//     c = a;  
//     printf("c = %d\n", c);
//     c += a;
//     printf("c  = %d\n", c);
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     float b;
//     double c;
//     char d;
//     printf("Size of int= %lu bytes\n", sizeof(a));
//     printf("Size of float =%lu bytes\n", sizeof(b));
//     printf("Size of double= %lu bytes\n", sizeof(c));
//     return 0;
// }

#include <stdio.h>
extern int a, b;
extern int c;
extern float f;
int main()
{
    int a, b;
    int c;
    float f;
    a = 10;
    b = 20;
    c = a + b;
    printf("value of c : %d\n", c);
    f = 70.0/3.0;
    printf("value of f : %f\n", f);
    return 0;
}