#include "node.hpp"

node::node(std::string name) : _name(name)
{}

node::~node()
{}

std::string node::get_name()
{
    return this->_name;
}

void node::set_name(std::string name)
{
    this->_name = name;
}
