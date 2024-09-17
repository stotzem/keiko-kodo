#include "project-euler.hpp"

void projectEuler(int problem) {
    std::cout << "Solution is ";
    switch (problem) {
        case 1:
            std::cout << pe0001();
            break;
        case 2:
            std::cout << pe0002();
            break;
        case 3:
            std::cout << pe0003();
            break;
        default:
            std::cout << "FUCK!";
            break;
    }
}
