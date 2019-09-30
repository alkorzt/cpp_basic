#include <iostream>
#include <string>

int main(){
    int animal_count {0};
    std::cout << "Введите количество ежей ";
    std::cin >> animal_count;

    std::string animal_name = "";
    if (animal_count > 10){
        std::cout << "Больше 10 бегать по лесу запрещено!" << std::endl;
        return 0;
    }

    for (int i = animal_count; i > 0; i--){
        switch(i % 10){
            case 0:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5: animal_name = " ежиков бежали"; break;
            case 4:
            case 3: 
            case 2:animal_name = " ежика бежало" ; break;
            case 1:animal_name = " ежик бежал"  ; break;
                
        }
        std::cout << i << animal_name << " по лесу. Один пошел домой" << std::endl;
    }
    std::cout << "Ежики кончились!" << std::endl; 
}
