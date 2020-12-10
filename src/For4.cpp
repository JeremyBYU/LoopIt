#include <iostream>
#include <string>

int main()
{
  const int rows = 5;
  const int cols = 5;
  // Outer For Loop
  for (int i = 0; i < rows; ++i)
  { 
    // Inner for loop
    for (int j = 0; j < cols; ++j)
    {
      // print out (i,j)
      std::cout << "(" << i << "," << j << ")" << " ";
    }
    std::cout << std::endl;
  }
}