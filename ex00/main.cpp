#include <iostream>
#include <cstdlib>

#include <iomanip>

void toChar( std::string value )
{
    char c;

    if (value.length() == 1)
    {
        try
        {
            c = static_cast<char>(std::stoi(value));
        }
        catch(const std::exception& e)
        {
            c = value[0];
        }
        if ((char)c < 32 || (char)c > 127)
            std::cout << "char: " << "Non displayable" << std::endl;
        else
            std::cout << "char: '" << c << "'" << std::endl;
    }
    else
    {
        try
        {
            c = static_cast<char>(std::stoi(value)); // std::atoi(value.c_str();)
        }
        catch(const std::exception& e)
        {
            std::cout << "char: " << "impossible" << std::endl;
            return ;
        }
        if (c < 32 || c > 127)
            std::cout << "char: " << "Non displayable" << std::endl;
        else
            std::cout << "char: '" << c << "'" << std::endl;
    }
   
}

void toDouble( std::string value )
{
    double d;
    try
    {
        d = static_cast<double>(std::stod(value));
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "double: " << "impossible" << std::endl;
    }
}

void toFloat( std::string value )
{
    float f;
    try
    {
        f = static_cast<float>(std::stof(value));
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "float: " << "impossible" << std::endl;
    }
}

void toInt( std::string value )
{
    int i;
    try
    {
        i = static_cast<int>(std::stoi(value));
        std::cout << "int: " << i << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "int: " << "impossible" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        toChar(argv[1]); // 32 -> 127
        toInt(argv[1]);
        toFloat(argv[1]); 
        toDouble(argv[1]); 
    }
    else
        std::cout << "Invalid parameters !!" << std::endl;
    return (0);
}