#include <bits/stdc++.h>

int main() {
    std::tuple<int, int> x = {1, 2};

    // 通过 std::get 获取元组的每个元素并分配给相应的变量
    int first = std::get<0>(x);
    int second = std::get<1>(x);

    std::cout << "First element: " << first << std::endl;
    std::cout << "Second element: " << second << std::endl;

    return 0;
}
