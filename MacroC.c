#include <stdio.h>
#define message_for(a, b) \
    printf(#a" and "#b" are students! \n" )

int main(void)
{
    message_for(Carole, Debro);
return 0;
}