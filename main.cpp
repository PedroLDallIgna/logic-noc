#include <iostream>
#include "node.hpp"

using namespace std;

int main(void)
{
    cout << "main.cpp\n";

    node my_node = node("my node");

    cout << my_node.get_name() << endl;

    return 0;
}
