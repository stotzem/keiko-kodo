#ifndef PE_0001_0025_HPP
#define PE_0001_0025_HPP

int pe0001(int a = 1000) {
    int answer = 0;
    for (int i = 3; i < a; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            answer += i;
        }
    }
    return answer;
}

#endif // PE_0001_0025_HPP
