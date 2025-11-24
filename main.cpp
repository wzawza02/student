#include <iostream>

int main() {
    std::cout << "請輸入年齡：";
    int age;
    std::cin >> age;

    if (age >= 18) {
        std::cout << "你已滿 18 歲，可以觀看限制級內容。\n";
    }
    if (age < 18) {
        std::cout << "你還是好好讀書吧。\n";
    }

    return 0;
}
