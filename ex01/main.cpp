#include <iostream>
#include <cstdio>
#include "Data.hpp"

// ----------  Serialize ----------------- //
uintptr_t   serialize(data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

// ----------- Deserialize ---------------- //
data*       deserialize(uintptr_t raw)
{
    return (reinterpret_cast<data *>(raw));
}

int main()
{
    // ------- Create Data ------//
    data *ptr = new data("Horse", 24);

    // ------- Display data ptr 1 -------//
    std::cout << "ptr : " << *ptr << std::endl;
    // ------- Serialize Data -----//
    uintptr_t raw = serialize(ptr);
    std::cout << "raw : " << raw << std::endl;

    // ------- Deserialize Data -----//
    data *ptr2 = deserialize(raw);
    
    // ------- Display data ptr 2 -------//
    std::cout << "ptr2 : " <<*ptr2 << std::endl;

    // ------- Check the output of serialize with input of deserialize
    if (ptr2 == ptr)
        std::cout << "The return value is equal to the first ptr" << std::endl;
    
    return (0);
}