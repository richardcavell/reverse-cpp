/* reverse-cpp by lhmouse, Richard Cavell and Microsoft CoPilot
 * Copyright (c) 2025 */

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string s;
  char c;

  while (std::cin.get(c))
    s.push_back(c);

  std::reverse(s.begin(), s.end());  /* This is C++17 */

  std::cout.write(s.data(), s.size());

  return 0;
}
