#include <iostream>
#include <cmath>

double get_throw_distance(double speed, double angle) {
    const double GRAVITY_ACCELERATION = 9.81;
    return speed * speed * sin ( 2 * angle * M_PI / 180 ) /  GRAVITY_ACCELERATION; 
}

int main(){
    double speed {.0};
    
    std::cout << "Введите скорость, м/с: ";
    std::cin >> speed;

    for (int i = 0; i <=90; i += 5) {
        std::cout << i << ": " << get_throw_distance(speed, static_cast<double>(i)) << " м."<< std::endl;
    }
}
