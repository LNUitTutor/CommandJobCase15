#include <iostream>
#include "..\ClassesHierarchy\Classes.h"

int main()
{
    std::cout << "Hello World!\n";
    Base a;
    Base b(5);
    std::cout << a.getA() << "     " << b.getA() << '\n';
}
