#include <iostream>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num = 29;
    std::cout << "Number of set bits: " << countSetBits(num) << std::endl;
    return 0;
}
