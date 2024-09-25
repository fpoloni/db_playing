

#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename K, typename T, typename Z>
Z findById(K x, T y)
{
  for (const auto &room : y)
  {
    if (x == y.id)
    {
      return y.name;
    }
  }

  return 0;
}