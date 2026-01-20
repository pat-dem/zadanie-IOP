#include <iostream>

int main() {
    int val;
    std::cin >> val;

    if (val <= 0) {
        std::cerr << "Blad: liczba nie jest dodatnia" << std::endl;
        return 1;
    }

    std::cout << val << std::endl;
    return 0;
}
