// #include <iostream>

// int main()
// {
//     int i;
//     std::cout << "Please enter shit";
//     std::cin >> i;
//     std::cout << "the value in i is " << i;
//     std::cout << "and its double is " << i*2 << ".\n";
//     return 0;
// }

#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
 std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

  return 0;
}