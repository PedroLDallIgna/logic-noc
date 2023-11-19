#ifndef NODE_HPP
#define NODE_HPP

#include <string>

class node
{
private:
    std::string _name;
public:
    node() = default;
    node(std::string name);
    ~node();
    /* GETTERS */
    std::string get_name();
    /* SETTERS */
    void set_name(std::string name);
};

#endif /* NODE_HPP */
