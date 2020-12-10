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

  //      type      element       range (e.g. list/vector)
  //       |           |           |
  //       ▼           ▼           ▼
  for (std::string reindeer : reindeers)
  {
    std::cout << "Reindeer " << reindeer << std::endl;
  }
  std::cout << std::endl;
  // type is automatically inferred from 'reindeers' vector
  for (auto reindeer : reindeers)
  {
    std::cout << "Reindeer " << reindeer << std::endl;
  }

  std::cout << "Finished Loops!\n";
}