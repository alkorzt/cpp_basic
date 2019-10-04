#include <iostream>

double pi(){
    double p {0}, z {1};
    for (int i = 1; i < 500000; i+=2) {
        p += z * 4 / i;
        z *= -1;
    }
    return p;
}

int main(){
    std::cout << pi() << std::endl;
}
