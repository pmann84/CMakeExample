#include <iostream>

#include "lib.h"

int main()
{
   auto result = ProjectLib::sum(1.0, 2.0);
   std::cout << result << std::endl;
   return 0;
}