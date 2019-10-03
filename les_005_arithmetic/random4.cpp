#include <iostream>

int main(){
	srand(time(0));
    int my_number {0}, magic_number;
    bool flag = true;
    do {
        magic_number = rand() % 100;
        std::cout << "Я загадал число - больше 0 меньше 100" << std::endl;
        while(true){
            std::cin >> my_number;
            if(my_number < magic_number){
                std::cout << "Маловато будет" << std::endl;
            } else {
                if(my_number > magic_number) {
                    std::cout << "Много. Попробуй еще " << std::endl; 
                } else {
                    std::cout << "В точку!" << std::endl;
                    break;
                }
            }
        }
        std::cout << "Сыграем еще (y/n)? ";
        char ans;
        std::cin >> ans;
        flag = (ans != 'y');
    } while(!flag);        

    std::cout << magic_number << std::endl;
}
