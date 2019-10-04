#include <iostream>
#include <cmath>

int main(){
    const int W_SIZE = 64;
    const int H_SIZE = 16;

    char matrix[H_SIZE][W_SIZE];
    for(int i = 0; i < H_SIZE; i++){
        for(int j = 0; j < W_SIZE; j++){
            matrix[i][j] = '.';
        }
    }

    for(int x = 0; x < W_SIZE; x++){
        int funct = (sin(1.0 * x * 2 * M_PI / W_SIZE) + 1) / 2 * H_SIZE;
        if((funct >= 0) and (funct < H_SIZE)) matrix[funct][x] = '*'; 
    }

    for(int i  = 0; i < H_SIZE; i++){
        for(int j = 0; j < W_SIZE; j++){
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}
