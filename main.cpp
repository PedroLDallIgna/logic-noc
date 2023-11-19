#include <iostream>
#include "mesh2d.hpp"
#include "node.hpp"

using namespace std;

int main(void)
{
    cout << "main.cpp\n";

    mesh2d my_network = mesh2d(2, 2);
    node my_node = node("my node");
    my_network.set_node(0, 0, my_node);

    cout << my_network.get_node(0, 0).get_name() << endl;

    return 0;
}
