#include <iostream>
#include "mesh2d.hpp"
#include "node.hpp"

using namespace std;

static void application_1();
static void application_2();
static void application_3();

int main(void)
{
    application_1();
    application_2();
    application_3();

    return 0;
}

static void application_1()
{
    mesh2d network = mesh2d(4, 4);
    network.set_node(2, 0, node("A"));
    network.set_node(1, 1, node("C"));
    network.set_node(1, 2, node("B"));
    network.set_node(0, 3, node("D"));

    cout << "\nAPPLICATION 1\n\n";

    network.send_message("A", "C");
    cout << "--------------------------------------\n";
    network.send_message("C", "D");
    cout << "--------------------------------------\n";
    network.send_message("B", "D");
}

static void application_2()
{
    mesh2d network = mesh2d(4, 4);
    network.set_node(3, 0, node("T"));
    network.set_node(1, 1, node("X"));
    network.set_node(2, 3, node("W"));

    cout << "\nAPPLICATION 2\n\n";

    network.send_message("T", "X");
    cout << "--------------------------------------\n";
    network.send_message("X", "T");
    cout << "--------------------------------------\n";
    network.send_message("X", "W");
}

static void application_3()
{
    mesh2d network = mesh2d(4, 4);
    network.set_node(3, 0, node("G"));
    network.set_node(2, 0, node("N"));
    network.set_node(2, 1, node("O"));
    network.set_node(2, 2, node("P"));
    network.set_node(1, 1, node("U"));
    network.set_node(1, 2, node("H"));
    network.set_node(1, 3, node("Z"));
    network.set_node(0, 3, node("V"));

    cout << "\nAPPLICATION 3\n\n";

    network.send_message("G", "O");
    cout << "--------------------------------------\n";
    network.send_message("N", "O");
    cout << "--------------------------------------\n";
    network.send_message("O", "U");
    cout << "--------------------------------------\n";
    network.send_message("P", "U");
    cout << "--------------------------------------\n";
    network.send_message("U", "H");
    cout << "--------------------------------------\n";
    network.send_message("H", "Z");
}
