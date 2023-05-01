// C++ Code to explain how "cin >> ws"
// discards the input buffer along with
// initial white spaces of string
 
#include<iostream>
#include<vector>
 
int main()
{
    int a;
    std::string s;
     
    // Enter input from user -
    // 4 for example
    std::cin >> a;
     
    // Discards the input buffer and
    // initial white spaces of string
    std::cin >> std::ws;
     
    // Get input from user -
    // GeeksforGeeks for example
    std::getline(std::cin, s);
     
    // Prints 4 and GeeksforGeeks :
    // will execute print a and s
    std::cout << a << std::endl;    
    std::cout << s << std::endl;
 
    return 0;
}