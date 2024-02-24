/* Rewrite the tempature conversion program of 1-2 to use a function for conversion*/

#include <stdio.h>

double fahrToCel(int fahr){
    return 5.0*(fahr-32)/9.0;

}

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 10; i++)
    {
        printf("%f \n", fahrToCel(i*10));
    }
    
    return 0;
}
