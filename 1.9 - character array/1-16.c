/*Revise the main routine for the longest line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text*/

#include <stdio.h>
#define MAXLINE 5

int main(int argc, char const *argv[])
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE))>1){
        if(len>max){
            max = len;
            if (max<=MAXLINE)
            {
                copy(longest, line, max);
            }
            else
            {
                copy(longest, line, MAXLINE);
            }
            
            
        }
    }
    if(max>0){
        printf("%s \n", longest);
        printf("length was %d \n", max);
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;
    
    i = 0;
    while ((c=getchar())!=EOF && c!='\n')
    {
       if (i < lim-1)
       {
        s[i] = c;
        ++i;
       }
       else
        ++i;
        
    }
    return i;
}

void copy(char to[], char from[], int max){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0' && i<max-2){
        ++i;
    }
}

