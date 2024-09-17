#include "project-euler.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Please give an option! Exiting.\n";
        return 1;
    }
    projectEuler(std::stoi(argv[1]));
    return 0;
}