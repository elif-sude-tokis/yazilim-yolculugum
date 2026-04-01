#include <iostream>
#include <string>osman

int main() { // Buradaki ; kaldırıldı
    std::string isim;
    int yas;

    std::cout << "Adiniz nedir? ";
    std::cin >> isim;

    std::cout << "Yasiniz kactir? "; // "satd" yerine "std" yapıldı
    std::cin >> yas;

    std::cout << "Merhaba " << isim << ", " << yas << " yasinda olmak harika!" << std::endl;

    return 0; 
}