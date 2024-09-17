#include <iostream>

int main() {
    int answer = 2, a = 4000000, i = 1, j = 2, k;
    while (j < a) {
        k = i + j;
        i = j;
        j = k;
        if (k % 2 == 0 && k < a) {
            answer += k;
        }
    }
    std::cout << answer << "\n";
}