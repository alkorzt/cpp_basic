#include <iostream>
#include <cmath>

double get_throw_distance(double speed, double angle) {
    const double GRAVITY_ACCELERATION = 9.81;
    return speed * speed * sin ( 2 * angle * M_PI / 180 ) /  GRAVITY_ACCELERATION; 
}

double get_throw_integral(double speed, double angle){
    const double GRAVITY_ACCELERATION = 9.81;
    double x{.0}, y{.0};
    double vx = speed * cos(angle * M_PI / 180);
    double vy = speed * sin(angle * M_PI / 180);
    double dt = .00001;

    while (y >= 0){
        x += vx * dt;
        y += vy * dt;
        vy -= GRAVITY_ACCELERATION * dt; 
    }

    return x;
}

int main(){
    double speed {.0}, angle{.0};
    
    std::cout << "Введите скорость, м/с: ";
    std::cin >> speed;

    std::cout << "Введите угол, градусы: ";
    std::cin >> angle;

    std::cout << "integral: " << get_throw_integral(speed, angle) << std::endl;
    std::cout << "formula: " << get_throw_distance(speed, angle) << std::endl;
}
