#include <iostream>
#include <cstdlib>

#include <iomanip>

char toChar( std::string value )
{
    int c;
    try
    {
        c = std::stoi(value); // std::atoi(value.c_str();)
    }
    catch(const std::exception& e)
    {
        std::cout << "char: " << "impossible" << std::endl;
        return (c);
    }
    if (c < 33 || c > 123)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    return (c);
}

double toDouble( std::string value )
{
    double d;
    try
    {
        d = std::stod(value);
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "double: " << "impossible" << std::endl;
        return (0); // error in toChar
    }
    return d;
}

float toFloat( std::string value )
{
    float f;
    try
    {
        f = std::stof(value);
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "float: " << "impossible" << std::endl;
        return (0); // error in toChar
    }
    return f;
}

int toInt( std::string value )
{
    int i;
    try
    {
        i = std::stoi(value);
        std::cout << "int: " << i << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "int: " << "impossible" << std::endl;
        return (0);
    }
    return i;
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        toChar(argv[1]); // 33 -> 126
        toInt(argv[1]);
        toFloat(argv[1]); 
        toDouble(argv[1]); 
    }
    else
        std::cout << "Invalid parameters !!" << std::endl;
    return (0);
}