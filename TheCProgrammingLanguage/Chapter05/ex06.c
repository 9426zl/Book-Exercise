#include <stdio.h>

int getline(char *s, int lim)
{
    int c;
    char *t = s;
    
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        *s++ = c;
    if (c == '\n')
        *s++ = c;
    *s = '\0';
    return s - t;
}

#include <ctype.h>

int atoi(char *s)
{
    int n, sign;
    
    for ( ; isspace(*s); s++)
        ;
    sign = (*s == '-') ? -1: 1;
    if (*s == '+' || *s == '-')
        s++;
    for ( n = 0; isdigit(*s); s++)
        n = 10 * n + *s - '0';
    return sign * n;
}

#include <stdio.h>

void reverse(char *s)
{
    int c;
    char *t;
    
    for ( t = s + (strlen(s)-1); s < t; s++, t--){
        c = *s;
        *s = *t;
        *t = c;
    }
}