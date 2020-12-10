#include <iostream>
#include <string>
int main()
{
  std::string input;  // user input variable

  while(true)
  { // Begin Loop Body
    std::cout << "Loop execututed. Repeat? (y/n): ";
    std::getline (std::cin, input);
    if (input != "y")
    {
      // Break out of loop
      break;
    }

  } // End Loop Body
  std::cout << "Finished Loops!\n";
}