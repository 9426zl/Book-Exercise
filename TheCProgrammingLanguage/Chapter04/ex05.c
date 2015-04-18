#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define NAME 'n'

int getop(char []);
void push(double);
double pop(void);
void mathfnc(char []);
int getch(void);
void ungetch(int);

main()
{
    int type;
    double op2;
    char s[MAXOP];
    
    while ((type = getop(s)) != EOF){
        switch(type){
            case NUMBER:
                 push(atof(s));
                 break;
            case NAME:
                 mathfnc(s);
                 break;
            case '+':
                 push(pop() + pop());
                 break;
            case '*':
                 push(pop()*pop());
                 break;
            case '-':
                 op2 = pop();
                 push(pop() - op2);
                 break;
            case '/':
                 op2 = pop();
                 if (op2 != 0.0)
                     push(pop() / op2);
                 else
                     printf("error: zero divisor\n");
                 break;
            case '\n':
                 printf("\t%.8g\n", pop());
                 break;
            default:
                printf("error");
                break;
        }
    }
    return 0;
}

void mathfnc(char s[])
{
    double op2;
    
    if(strcmp(s, "sin") == 0)
        push(sin(pop()));
    else if (strcmp(s, "cos") == 0)
        push(cos(pop()));
    else if (strcmp(s, "exp") == 0)
        push(exp(pop()));
    else if (strcmp(s, "pow") == 0){
        op2 = pop();
        push(pow(pop(), op2));
    }else
        printf("error");
}

int getop(char s[])
{
    int c, i;
    
    while((s[0] = c = getch()) == ' '|| c == '\t')
        ;
    s[1] = '\0';
    i = 0;
    if (islower(c)){
        while (islower(s[++i] = c = getch()))
            ;
        s[i] = '\0';
        if (c != EOF)
            ungetch(c);
        if (strlen(s) > 1)
            return NAME;
        else
            return c;
    }
    if (!isdigit(c) && c != '.')
        return c;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error:stack full");
}

double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else{
        printf("error");
        return 0.0;
    }
}