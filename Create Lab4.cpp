#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {12, 3, 45, 6, 23, 8, 9, 2, 11, 14, 5, 7, 16, 18, 19, 4, 22, 25, 10, 13};

    std::partition(arr.begin(), arr.end(), [](int x){ return x % 2 == 0; });
    std::sort(arr.begin(), arr.begin() + std::count_if(arr.begin(), arr.end(), [](int x){ return x % 2 == 0; }));
    std::sort(arr.begin() + std::count_if(arr.begin(), arr.end(), [](int x){ return x % 2 != 0; }), arr.end(), std::greater<int>());

    for (int x : arr) std::cout << x << " ";

    return 0;
}
