#include <climits>
#include <iostream>

int main() {
    int a = 20;
    for (int i = a; i <= INT_MAX; i = i + 2) {
        bool allEven = true;
        for (int j = 3; j <= a && allEven; j++) {
            if (i % j != 0) {
                allEven = false;
            }
        }
        if (allEven) {
            std::cout << i << "\n";
            return 0;
        }
    }
}