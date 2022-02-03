#include "Data.hpp"

data::data( std::string title, int id ) : _title(title), _id(id) {}

data::data() : _title("unkonwn"), _id(0){}

data::~data(){}

data::data( const data &dt) {*this = dt;}

data& data::operator = (const data &dt)
{
    this->_title = dt._title;
    this->_id = dt._id;
    return (*this);
}

std::string data::getTitle( void ) const
{
    return (this->_title);
}

int         data::getId( void ) const
{
    return (this->_id);
}

void        data::setTitle( std::string title )
{
    this->_title = title;
}

void        data::setId( int id)
{
    this->_id = id;
}

std::ostream& operator << (std::ostream& os, const data& dt)
{
    os << "Id is :" << dt.getId() << ", Title is :" << dt.getTitle() << ".";
    return (os);
}
