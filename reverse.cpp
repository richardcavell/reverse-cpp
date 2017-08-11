#include <iostream>
#include <vector>

int main()
{
  std::vector<char> v;

  while(std::cin)
    v.push_back(std::cin.get());

  for(auto i = v.rbegin(); i < v.rend(); ++i)
    std::cout << *i;
}
