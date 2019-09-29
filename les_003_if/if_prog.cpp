#include <iostream>

int main(){
    int animal_count{0};
    
    std::cout << "Введите количество ежиков: ";
    std::cin >> animal_count;

    for(int i = animal_count; i >= 1; i--){
        std::cout << i << " ежиков было на полянке. Один ушел. " << std::endl;
        if (i % 2) std::cout << "---------------" << std::endl;
    } 
    
    std::cout << "Ежики кончились!" << std::endl;
}
