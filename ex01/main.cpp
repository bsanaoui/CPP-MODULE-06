#include <iostream>
#include "Data.hpp"

// uintptr_t serialize(Data* ptr)
// {

// }

int main()
{
    Data *ptr = new Data("Horse", 25);
    std::cout << *ptr << std::endl;
    return (0);
}