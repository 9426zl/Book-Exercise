#include <stdio.h>

#define NONBLANK 'a'

main()
{
    int c, nextc;
    
    nextc = NONBLANK;
    while((c = getchar()) != EOF){
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (nextc != ' ')
                putchar(c);
        nextc = c;
    }
}