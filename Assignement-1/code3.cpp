#include <iostream>

bool isBitSet(int num, int i) {
    return (num & (1 << i)) != 0;
}

int main() {
    int num = 29; // 11101 in binary
    int bit = 3;
    std::cout << "Is bit " << bit << " set? " << (isBitSet(num, bit) ? "Yes" : "No") << std::endl;
    return 0;
}
