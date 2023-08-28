// #define _XOPEN_SOURCE
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// #include <ctime>

// int main(void)
// {
//     struct tm tm;
//     char buf[255];

//     memset(&tm, 0, sizeof(tm));
//     strptime("0-0-0", "%Y-%m-%d", &tm);
//     std::strftime(buf, sizeof(buf), "%d %b %Y", &tm);
//     puts(buf);
//     exit(EXIT_SUCCESS);
// }


#include <cstring>
#include <iomanip>
#include <iostream>
 
int main() 
{
    char input[] = "one + two * (three - four)!";
    const char* delimiters = "! +- (*)";
    char *token = std::strtok(input, delimiters);
    while (token)
    {
        std::cout << token << ' ';
        token = std::strtok(NULL, delimiters);
    }
 
    std::cout << "\nContents of the input string now:\n\"";
    for (std::size_t n = 0; n < sizeof input; ++n)
    {
        const char c = input[n];
        if (c != '\0')
            std::cout << c;
        else
            std::cout << "\\0";
    }
    std::cout << "\"\n";
}