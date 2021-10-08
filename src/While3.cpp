#include <iostream>
#include <string>
int main()
{
  
  bool repeat = false; // condition variable
  std::string input;  // user input variable

  do
  { // Begin Loop Body
    std::cout << "Loop execututed. Repeat? (y/n): ";
    std::cin >> input;
    repeat = input == "y";
  } // End Loop Body
  while(repeat);
  //      ▲
  //      |
  //  conditional
  std::cout << "Finished Loops!\n";
}