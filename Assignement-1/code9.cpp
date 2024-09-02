#include <iostream>
using namespace std;
bool isPowerOfTwo(int num) {
    // number is positive and check if num & (num - 1) is 0
    return num > 0 && (num & (num - 1)) == 0;
}

int main() {
    int num;
    cin>>num;
    if (isPowerOfTwo(num)) {
        std::cout << num << " is a power of 2." << std::endl;
    } else {
        std::cout << num << " is not a power of 2." << std::endl;
    }
    return 0;
}
