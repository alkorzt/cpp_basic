#include <iostream>

int main(){
    double arg_X, arg_Y;
    char operation;

    std::cout << "Введите выражение: ";
    std::cin >> arg_X >> operation >> arg_Y;

    switch (operation) {
        case '+': std::cout << arg_X + arg_Y << std::endl; break;
        case '-': std::cout << arg_X - arg_Y << std::endl; break;
        case '*': std::cout << arg_X * arg_Y << std::endl; break;
        case '/': 
            if(arg_Y) std:: cout << arg_X / arg_Y  << std::endl; 
            break;
        default: std::cout << "Неизвестная операция!" << std::endl;
    }
}
