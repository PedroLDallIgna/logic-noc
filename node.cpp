#include "node.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

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

int node::referee(int source_row, int source_column, int target_row, int target_column)
{
    if (source_row == target_row && source_column == target_column)
    {
        return 1;
    }
    cout << "[R] ";
    cout << setw(25) << left << "[ARBITRAGEM]";
    cout << "[" << source_row << source_column << "] [" << target_row << target_column << "]" << endl;
    return 0;
}

void node::process(int source_row, int source_column, int target_row, int target_column)
{
    cout << "[P] ";
    cout << setw(25) << left << "[ENCERRANDO COMUNICACAO]";
    cout << "[" << source_row << source_column << "] [" << target_row << target_column << "]" << endl;
}
