#include <iostream>
#include <string>
int main()
{
  
  bool repeat = true; // condition variable
  std::string input;  // user input variable

  // While loops
  while(repeat)
  {
    std::cout << "Loop execututed. Repeat? (y/n): ";
    std::getline (std::cin, input);
    repeat = input == "y";
  }
  std::cout << "Finished Loops!\n";
}