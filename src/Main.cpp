#include "0001-0025.hpp"
#include "Util.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Please give an option! Exiting.\n";
        return 1;
    }
    switch (std::stoi(argv[1])) {
        case 1:
            printSolution(pe0001());
            break;
        default:
            std::cout << "Unknown option: " << argv[1];
            break;
    }
    return 0;
}