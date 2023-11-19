#ifndef MESH2D_HPP
#define MESH2D_HPP
#include "node.hpp"

class mesh2d
{
private:
    int _x;
    int _y;
    node** _matrix;
    node** generate_mesh();
public:
    mesh2d(int x, int y);
    ~mesh2d();
    node get_node(int row, int column);
    void set_node(int row, int column, node n);
};


#endif /* MESH2D_HPP */
