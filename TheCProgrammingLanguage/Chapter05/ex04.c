int strend(char *s, char *t)
{
    int i = 0;
    for ( ; *s; s++)
        ;
    for ( ; *t; t++)
        i++;
    for ( ; *s == *t && i > 0; s--, t--)
        i--;
    if (!i)
        return 1;
    else
        return 0;
}