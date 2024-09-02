#include <iostream>
#include <vector>
#include <bitset>

void printSubsets(const std::vector<int>& arr) {
    int n = arr.size();
    int subsetCount = 1 << n; // 2^n subsets
    for (int i = 0; i < subsetCount; ++i) {
        std::cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    printSubsets(arr);
    return 0;
}
