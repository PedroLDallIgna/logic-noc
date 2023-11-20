#ifndef NODE_HPP
#define NODE_HPP

#include <string>

class node
{
private:
    std::string _name;
    int _column;
    int _row;
public:
    node() = default;
    node(std::string name);
    ~node();
    /* GETTERS */
    std::string get_name();
    /* SETTERS */
    void set_name(std::string name);

    int referee(int source_row, int source_column, int target_row, int target_column);
    void process(int source_row, int source_column, int target_row, int target_column);
};

#endif /* NODE_HPP */
