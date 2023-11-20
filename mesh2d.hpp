#ifndef MESH2D_HPP
#define MESH2D_HPP
#include "node.hpp"

struct mesh_pos
{
    int x;
    int y;
};


class mesh2d
{
private:
    int _x;
    int _y;
    node** _matrix;
    node** generate_mesh();
    void route(mesh_pos source, mesh_pos target);
public:
    mesh2d(int x, int y);
    ~mesh2d();
    node get_node(int row, int column);
    void set_node(int row, int column, node n);
    void send_message(mesh_pos source, mesh_pos target);
};


#endif /* MESH2D_HPP */
