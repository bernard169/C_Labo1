#include <stdio.h>
#include <Limits.h>

int main()
{
    printf ("Bits : %d \n", sizeof(long int)*8);
    printf ("Max : %d \n", LONG_MAX);
    printf ("Min : %d \n", LONG_MIN);
    return 0;
}