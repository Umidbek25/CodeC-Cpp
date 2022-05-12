#include <stdio.h>
int main()
{
    char line[100];
    printf("Enter a string: ");
    scanf("%[Enter a string: ]");
    scanf("%[^\n]", line);
    printf("%s", line);
    return 0;
}
