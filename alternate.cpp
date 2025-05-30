/* reverse-cpp by lhmouse
 * Copyright (c) 2025 */

#include <iostream>
#include <string>
#include <utility>

int main()
{
  std::string s {};
  char c;

  while(std::cin.get(c))
    s.push_back(c);

  for (auto bi = s.begin(), ei = s.end()-1; bi < ei; ++bi, --ei)
        std::swap(*bi, *ei);

  std::cout.write(s.data(), s.size());
}
