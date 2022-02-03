#ifndef __DATA__
#define __DATA__

#include <iostream>

class data
{
    private:
    std::string _title;
    int         _id;

    public:
    data( std::string, int);
    data();
    ~data();
    data( const data &dt);
    data& operator = (const data &dt);

    std::string getTitle( void ) const; 
    int         getId( void ) const;
    void        setTitle( std::string );
    void        setId( int );
};

std::ostream& operator << (std::ostream& os, const data& dt);

#endif