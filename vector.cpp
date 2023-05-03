// NOT ALLOWED TO BE USED UNTIL C08!!!


// C++ program to demonstrate
// array of strings using
// vector class
#include <iostream>
#include <string>
#include <vector>
 
// Driver code
int main()
{
  // Declaring Vector of String type
  // Values can be added here using
  // initializer-list
  // syntax "colour {"blue", ..etc}" cannot be used in c++98

  //std::vector<std::string> colour{"Blue", "Red", "Orange"};

  //below can be used in c++98 to create vector (array) of strings using vector
  std::vector<std::string> colour;
 
  // Strings can be added at any time
  // with push_back
  colour.push_back("Yellow");
 
  // Print Strings stored in Vector
  for (int i = 0; i < colour.size(); i++)
      std::cout << colour[i] << "\n";
}