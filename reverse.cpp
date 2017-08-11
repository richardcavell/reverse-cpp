#include <iostream>
#include <vector>

int main()
{
  std::vector<char> v;

  int c;
  while(c = std::cin.get(), !std::cin.eof())
    v.push_back(c);

  if (!v.empty())
    for(auto i = v.rbegin(); i <= v.rend(); ++i)
      std::cout << *i;
}
