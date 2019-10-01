#include <iostream>
#include <cmath>

#define GRAVITY_ACCELERATION 9.81

int main(){
    double speed {.0}, angle {.0};
    
    std::cout << "Введите скорость, м/с: ";
    std::cin >> speed;

    std::cout << "Введите угол, градусы: ";
    std::cin >> angle;

    double distance = speed * speed * sin ( 2 * angle * M_PI / 180 ) /  GRAVITY_ACCELERATION;
    std::cout << "Расстояние, м: " << distance << std::endl; 
}
