#include <iostream>
#include <string>
#include <vector>

int main()
{
  // List of all reindeers
  std::vector<std::string> reindeers{"Dasher", "Dancer", "Prancer",
                                     "Vixen", "Comet", "Cupid",
                                     "Donner", "Blitzen",
                                     "Rudolph"};

  //   initialize     conditional      increment
  //       |             |                |
  //       ▼             ▼                ▼
  for (int i = 0; i < reindeers.size(); ++i)
  { // Begin Loop Body
    std::string reindeer = reindeers[i]; // use index variable to 'pull' item from vector
    std::cout << "Reindeer #" << std::to_string(i) << " is " << reindeer << std::endl;
  } // End Loop Body
  std::cout << "Finished Loops!\n";
}