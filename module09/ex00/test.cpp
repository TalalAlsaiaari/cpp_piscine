#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>
 
int main()
{
    // setenv("TZ", "/usr/share/zoneinfo/America/Los_Angeles", 1); // POSIX-specific
 
    std::tm tm; // Zero initialise
    tm.tm_year = 2022 - 1900; // 2020
    tm.tm_mon = 2 - 1; // February
    tm.tm_mday = 29; // 15th
    tm.tm_hour = 10;
    tm.tm_min = 15;
    tm.tm_isdst = 0; // Not daylight saving
    std::time_t t = std::mktime(&tm); 
    // std::tm local = *std::localtime(&t);
 
    std::cout << t << std::endl;
}