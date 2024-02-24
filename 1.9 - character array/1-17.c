/*Write a program that will print all lines that are longer than 80 characters*/
#include <stdio.h>
#define LOWERLIM 8
#define UPPERLIM 1000

int len;
char line[UPPERLIM];
int main(int argc, char const *argv[])
{
    printf("Enter a blank line to terminate program. \n");
    while((len = getLine(line, UPPERLIM)
    )>1){
        if (len>LOWERLIM)
        {
            printf("\n length longer than %d, printing: \n %s \n", LOWERLIM, line);
        }
        
    }
    return 0;
}

int getLine(char s[], int lim){
    int c,i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

