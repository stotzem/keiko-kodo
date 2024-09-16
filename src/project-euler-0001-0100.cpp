#include "project-euler.hpp"

int pe0001(int a) {
    int answer = 0;
    for (int i = 3; i < a; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            answer += i;
        }
    }
    return answer;
}

int pe0002(int a) {
    int answer = 2, i = 1, j = 2, k;
    while (j < a) {
        k = i + j;
        i = j;
        j = k;
        if (k % 2 == 0 && k < a) {
            answer += k;
        }
    }
    return answer;
}
