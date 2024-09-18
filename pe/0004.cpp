#include <iostream>

int main() {
    int a = 999, answer = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            int value = i * j;
            std::string str = std::to_string(value);
            size_t length = str.length();
            if (length % 2 != 0) {
                size_t mid = length / 2;
                str.erase(mid, 1);
                length = str.length();
            }
            std::string str1 = str.substr(0, length / 2);
            std::string str2 = str.substr(length / 2);
            std::reverse(str2.begin(), str2.end());
            if (str1 == str2 && value > answer) {
                answer = value;
            }
        }
    }
    std::cout << answer << "\n";
}