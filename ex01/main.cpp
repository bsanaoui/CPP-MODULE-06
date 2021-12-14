#include <iostream>
#include <cstdio>
#include "Data.hpp"

// ----------  Serialize ----------------- //
uintptr_t   serialize(Data* ptr)
{
    // FILE *file = fopen("data", "w+"); // w+ Read and write
    // if (file == NULL)
    //     exit(EXIT_FAILURE);

    // fprintf(file, DATA_FORMAT_OUT, ptr->getTitle().c_str(), ptr->getId()); //Writes the C string pointed by format to the stream.
    // fseek(file, 0, SEEK_SET);

    return (reinterpret_cast<uintptr_t>(ptr));
}

// ----------- Deserialize ---------------- //
Data*       deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    // ------- Create Data ------//
    Data *ptr = new Data("Horse", 24);

    // ------- Display data ptr 1 -------//
    std::cout << *ptr << std::endl;
    // ------- Serialize Data -----//
    uintptr_t raw = serialize(ptr);

    // ------- Deserialize Data -----//
    Data *ptr2 = deserialize(raw);
    
    // ------- Display data ptr 2 -------//
    std::cout << *ptr2 << std::endl;

    // ------- Check the output of serialize with input of deserialize
    if (raw == reinterpret_cast<uintptr_t>(ptr))
        std::cout << "The return value is equal to first ptr" << std::endl;
    
    return (0);
}