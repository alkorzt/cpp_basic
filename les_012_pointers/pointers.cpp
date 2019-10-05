#include <iostream>

int main(){
    std::cout << "Введите количество блоков: ";
    int count {0};
    std::cin >> count;

    int *block = new int[count];
    int *pBlock = block;

    std::cout << "Ввод чисел : " << std::endl;
    for(int i =0; i < count; i++){
        std::cout << "Введите число: ";
        std::cin >> *(block + i);
    }

    std::cout << "Вывод массива " << std::endl;
    for(int i = 0; i < count; i++) {
        std::cout << *(pBlock++) << "  ";
    }
    std::cout << std::endl;

    delete[] block;
}
