#define abs(x) ((x) < 0 ? ~(x) : (x))

void itoa(int n, char s[], int w)
{
    int i, sign;
    void reverse(char s[]);
    
    sign = n;
    i = 0;
    do{
        s[s++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    while (i < w)
        s[i++] = '';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int i, j;
    char temp;
    
    i = 0;
    while(s[i] != '\0')
        ++i;
    --i;
    if( s[i] == '\n')
        --i;
    j = 0;
    while(j < i){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}