static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int year, int month, int day)
{
    int i, leap;
    
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    if (month > 0 && month < 13 && day > 0 && day < daytab[leap][month])
        for (i = 1; i < month; i++)
            day += daytab[leap][i];
        return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    if (yearday > 0 && yearday < (355 + leap + 1))
       for (i = 1; i <= 12 && yearday > daytab[leap][i]; i++)
           yearday -= daytab[leap][i];
       return i, yearday
}