#include <iostream>
#include <string>

int main()
{
  const int rows = 8;
  const int cols = 8;
  // Outer For Loop
  for (int i = 0; i < rows; ++i)
  { 
    // Inner for loop
    for (int j = 0; j < cols; ++j)
    {
      std::cout << "#" << " ";
    }
    std::cout << std::endl;
  }
}