#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctime>
#include <iostream>
#include <sstream>


bool extractDate(const std::string& s, int& d, int& m, int& y)
{
    std::istringstream is(s);
    char delimiter;
    struct tm t;
    time_t when;
    const struct tm *norm;

    memset(&t, 0, sizeof(t));
    if (is >> d >> delimiter >> m >> delimiter >> y)
    {
        t.tm_mday = d;
        t.tm_mon = m - 1;
        t.tm_year = y - 1900;
        t.tm_isdst = -1;
        when = mktime(&t);
        norm = localtime(&when);
        return (norm->tm_mday == d    &&
                norm->tm_mon  == m - 1 &&
                norm->tm_year == y - 1900);
    }
    std::cout << "Error: bad input => " << s << std::endl;
    return false;
}

int main(int ac, char **av)
{
    (void)ac;
    std::string s(av[1]);
    int d,m,y;

    if (extractDate(s, d, m, y))
        std::cout << "date " 
                  << d << "/" << m << "/" << y
                  << " is valid" << std::endl;
    else
        std::cout << "date is invalid" << std::endl;
}