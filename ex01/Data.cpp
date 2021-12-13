#include "Data.hpp"

Data::Data( std::string title, int id ) : _title(title), _id(id) {}

std::string Data::getTitle( void ) const
{
    return (this->_title);
}

int         Data::getId( void ) const
{
    return (this->_id);
}

void        Data::setTitle( std::string title )
{
    this->_title = title;
}

void        Data::setId( int id)
{
    this->_id = id;
}

std::ostream& operator << (std::ostream& os, const Data& dt)
{
    os << "Id is :" << dt.getId() << ", Title is :" << dt.getTitle() << ".";
    return (os);
}
