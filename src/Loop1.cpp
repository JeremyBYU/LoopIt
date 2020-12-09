#include <iostream>
#include <string>
int main()
{
  // For Loops
  for (int i = 0; i < 5; ++i)
  {
    std::cout << "Loop " + std::to_string(i) << std::endl;
  }
  std::cout << "Finished Loops!\n";
}