#include <iostream>
#include <string>
int main()
{
  
  bool repeat = true; // condition variable
  std::string input;  // user input variable

  //  conditional
  //      |
  //      ▼
  while(repeat)
  { // Begin Loop Body
    std::cout << "Loop execututed. Repeat? (y/n): ";
    std::cin >> input;
    repeat = input == "y";
  } // End Loop Body
  std::cout << "Finished Loops!\n";
}