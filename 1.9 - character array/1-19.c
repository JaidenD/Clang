/*Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time*/

#include <stdio.h>
#define UPPERLIM 100

int len;
char str[UPPERLIM];

int main(int argc, char const *argv[])
{
    while ((len = getLine(str, UPPERLIM))>1)
    {
        rev(str);
    }
    
    return 0;
}

void rev(char s[]){
    char stringReversed[len+1];
    int i;
    for (i = 0; i < len; i++)
    {
        stringReversed[i] = s[len-i-1];
    }
    stringReversed[len] = '\0'; // Null-terminate the string
    printf("%s \n", stringReversed);
}

int getLine(char s[], int lim){
    int c,i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
    {
        s[i] = c;
    }
    return i;
}