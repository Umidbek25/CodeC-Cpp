// #include <stdio.h>
//     int main()
// {
//     int num = 8;
//     switch (num)
//     {
//         case 7:
//             printf("Value is 7\n");
//             //break;
//         case 8:
//             printf("Value is 8\n");
//             //break;
//         case 9:
//             printf("Value is 9\n");
//             //break;
//         default:
//             printf("Out of range");
//             //break;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
int a = 100;
int b = 200;
switch (a)
{
case 100:
    printf("This is part of outer switch: %d\n", a);
    switch(b)
    
        case 200:
        printf("This is part of inner switch: %d\n", b);
    
    break;
}
printf("Exact value of a is: %d\n", a);
printf("Exact value of b is: %d\n", b);
return 0;
}
