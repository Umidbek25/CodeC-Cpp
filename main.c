#include <stdio.h>
int main()
{
    int a[5][2] = {{0,0}, {1,2}, {2, 4}, {3,6}, {4,8}};
    int i, j;
    for ( i = 0; i<5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
return 0;
}

// #include <stdio.h>
// void display(int ade1, int age2)
// {
//     printf("%d\n, age1");
//     printf("%d\n", age2)
// }
// int main(){
//     int ageArray[] = {2, 8, 4, 12};
//     display(ageArray[1], ageArray[2])
// }
