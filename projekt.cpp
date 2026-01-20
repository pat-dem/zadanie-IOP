#include <iostream>

bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int val;
    std::cin >> val;
    std::cout << val;
    if (czy_pierwsza(val)) {
        std::cout << " jest liczba pierwsza" << std::endl;
    } else {
        std::cout << " nie jest liczba pierwsza" << std::endl;
    }
    return 0;
}
