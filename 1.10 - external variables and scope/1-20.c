/*Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?*/
// Tab stops are spaced every 8 spaces, if i have the word 'hi' and then tab, it should bring me to the 8th column, rather than the 2+8=10th column.
#include <stdio.h>
#define MAXCHAR 100;
int main(int argc, char const *argv[])
{
    
    return 0;
}

int getLine(char s[], int lim){
    int c,i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
    {
        s[i] = c;
    }
    return i;
}