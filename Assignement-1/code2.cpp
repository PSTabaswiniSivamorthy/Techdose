#include <iostream>

int setBit(int num, int i) {
    return num | (1 << i);
}

int main() {
    int num = 29; // 11101 in binary
    int bit = 1;
    std::cout << "Number after setting bit " << bit << ": " << setBit(num, bit) << std::endl;
    return 0;
}
