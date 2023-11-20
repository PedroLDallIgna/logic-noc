#include <iostream>
#include "mesh2d.hpp"
#include "node.hpp"

using namespace std;

int main(void)
{
    mesh2d my_network = mesh2d(2, 2);
    node my_node = node("my node");
    my_network.set_node(0, 0, my_node);

    my_network.send_message(mesh_pos{0, 0}, mesh_pos{1, 1});

    return 0;
}
