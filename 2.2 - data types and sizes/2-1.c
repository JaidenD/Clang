#include <stdio.h>
#include <limits.h>


int main(int argc, char const *argv[])
{
    
    printf("%d \n",CHAR_BIT);
    printf("%d \n",CHAR_MAX);
    printf("%d \n",CHAR_MIN);
    printf("%d \n",INT_MAX);
    printf("%d \n",INT_MIN);
    printf("%d \n",LONG_MAX);
    printf("%d \n",LONG_MIN);
    printf("%d \n", SHRT_MIN);
    printf("%d \n", SHRT_MAX);
    printf("%u \n", UCHAR_MAX);
    printf("%lu \n", ULONG_MAX);
    printf("%u \n", UINT_MAX);
    printf("%u \n", USHRT_MAX);
    // Kinda trivial, lets compute them

    // short int takes 16 bits, 1 bit for sign = 2^15 = 32768 => range = 2*32768 = 65536
    // long int takes 32 bits, 1 bit for sign = 2^31 = 2147483648 => range = 2*2147483648 = 4294967296
    // etc...
    return 0;
}
