#ifndef MESH2D_HPP
#define MESH2D_HPP
#include "node.hpp"
#include <map>
#include <string>

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
    std::map<std::string, mesh_pos> _nodes_table;
    node** generate_mesh();
    mesh_pos route(mesh_pos source, mesh_pos target);
public:
    mesh2d(int x, int y);
    ~mesh2d();
    node get_node(int row, int column);
    mesh_pos get_node_pos(std::string nodename);
    void set_node(int row, int column, node n);
    void send_message(mesh_pos source, mesh_pos target);
    void send_message(std::string source_nodename, std::string target_nodename);
};

#endif /* MESH2D_HPP */
