#include <stdio.h>

int power (int x, unsigned int n);

int main ()
{
    printf ("10^1 = %d \n", power(10,1));
    printf ("2^10 = %d \n", power(2,10));
    printf ("-4^7 = %d \n", power(-4,7));
    printf ("10^0 = %d \n", power(10,0)); 
    return 0;
}

int power (int x, unsigned int n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n==0)
    {
        return 1;
    }
    else if ((n%2)==0) return power (x*x, n/2); //condensate form
    else
    {
        return x*power(x*x, (n-1)/2);
    }
}