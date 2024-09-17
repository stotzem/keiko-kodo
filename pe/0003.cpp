#include <iostream>

int main() {
    long long a = 600851475143;
    long answer = -1;
    while (a % 2 == 0) {
        answer = 2;
        a /= 2;
    }
    for (long i = 3; i * i <= a; i += 2) {
        while (a % i == 0) {
            answer = i;
            a /= i;
        }
    }
    if (a > 2) {
        answer = a;
    }
    std::cout << answer << "\n";
}