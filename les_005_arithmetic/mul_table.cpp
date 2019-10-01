#include <iostream>
#include <iomanip>

#define SZ_MAX 10

int main(){
    for (int i = 1; i <= SZ_MAX; i++){
        for (int j = 1; j <= SZ_MAX; j++) {
            std::cout << std::setw(2) << i * j << " ";
        }
        std::cout << std::endl;
    }

}
