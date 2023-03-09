#include <iostream>
#include "Vec3d.h"

int main()
{
  Vec3d v1(1, 2, 3);
  Vec3d v2(4, 5, 6);

  Vec3d v3 = v1.add(v2);
  std::cout << v3.toString() << std::endl;

  Vec3d v4 = v1.subtract(v2);
  std::cout << v4.toString() << std::endl;

  Vec3d v5 = v1.increment();
  std::cout << v5.toString() << std::endl;

  Vec3d v6 = v1.multiply(v2);
  std::cout << v6.toString() << std::endl;

  bool v7 = v1.equals(v2);
  std::cout << "v1 equals v2: " << v7 << std::endl;

  return 0;
}