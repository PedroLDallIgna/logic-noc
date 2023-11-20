#include "mesh2d.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

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

void mesh2d::route(mesh_pos source, mesh_pos target)
{
    mesh_pos actual = source;
    cout << "[P] ";
    cout << setw(25) << left << "[INICIANDO COMUNICACAO]";
    cout << "[" << actual.y << actual.x << "] [" << target.y << target.x << "]" << endl;

    while (true)
    {
        if (this->_matrix[actual.y][actual.x].referee(actual.y, actual.x, target.y, target.x))
        {
            this->_matrix[target.y][target.x].process(source.y, source.x, target.y, target.x);
            break;
        } else {
            cout << "[R] ";
            cout << setw(25) << left << "[ENVIANDO]";
            cout << "[" << actual.y << actual.x << "] [" << target.y << target.x << "]" << endl;
            if (actual.x != target.x)
            {
                if (actual.x < target.x)
                {
                    actual.x++;
                }
                else
                {
                    actual.x--;
                }
            } else if (actual.y != target.y) {
                if (actual.y < target.y)
                {
                    actual.y++;
                }
                else
                {
                    actual.y--;
                }
            }
        }
    }
}

void mesh2d::send_message(mesh_pos source, mesh_pos target)
{
    this->route(source, target);
}
