#include "mesh2d.hpp"

mesh2d::mesh2d(int x, int y) : _x(x), _y(y)
{
    this->_matrix = this->generate_mesh();
}

mesh2d::~mesh2d()
{}

node** mesh2d::generate_mesh()
{
    node** nodes = new node*[this->_y];
    for (int i = 0; i < this->_y; i++) {
            nodes[i] = new node[this->_x];
            for (int j = 0; j < this->_x; j++) {
                nodes[i][j] = node();
            }
        }

    return nodes;
}

node mesh2d::get_node(int row, int column)
{
    return this->_matrix[row][column];
}

void mesh2d::set_node(int row, int column, node n)
{
    this->_matrix[row][column] = n;
}
