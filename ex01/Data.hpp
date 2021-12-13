#ifndef __DATA__
#define __DATA__

#include <iostream>

class Data
{
    private:
    std::string _title;
    int         _id;

    public:
    Data( std::string, int);

    std::string getTitle( void ) const; 
    int         getId( void ) const;
    void        setTitle( std::string );
    void        setId( int );
};

std::ostream& operator << (std::ostream& os, const Data& dt);

#endif