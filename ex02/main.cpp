#include <iostream>
#include <cstdlib>
#include "A.cpp"
#include "B.cpp"
#include "C.cpp"
#include "Base.hpp"

// ------ !!!!!!!!!! diff bitween dynamic_cast and typeid
Base * generate(void)
{
    srand(time(NULL));
    Base *bases[3] = {
        new A(),
        new B(),
        new C()
    };
    return (bases[std::rand() % 3]);
}

void identify(Base* p)
{
    std::cout << "The generated type is ";
    if (dynamic_cast<A *>(p))
        std::cout << "'A'" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "'B'" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "'C'" << std::endl;
    else
        std::cout << "'Unknown'" << std::endl;
}

void identify(Base& p)
{
    std::cout << "The generated type is ";
 
    try {p = dynamic_cast<A&>(p); std::cout << "'A'" << std::endl; return;}
    catch(std::exception &e){}

    try {p = dynamic_cast<B&>(p); std::cout << "'B'" << std::endl; return ;}
    catch(std::exception &e){}

    try {p = dynamic_cast<C&>(p); std::cout << "'C'" << std::endl; return ;}
    catch(std::exception &e){}

    std::cout << "'Unknown'" << std::endl;
}

int main()
{
    // ------- Create Data ------//
    Base *b1 = generate();
    identify(*b1);
    identify(b1);
    return (0);
}