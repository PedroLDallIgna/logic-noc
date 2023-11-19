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
};


#endif /* MESH2D_HPP */
