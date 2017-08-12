#include <iostream>
#include <vector>

int main()
{
  std::vector<char> v;

  char c;
  while(std::cin.get(c))
    v.push_back(c);

  if (!v.empty())
    for(auto i = v.rbegin(); i <= v.rend(); ++i)
      std::cout << *i;
}
