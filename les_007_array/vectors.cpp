#include <iostream>
#include <vector>
    
int main(){
    // Может изменять размерность
    std::vector<int> vec;
    const int VEC_SIZE = 10;

    for(int i = 0; i < VEC_SIZE; i++){
        vec.push_back(i);
    }

    for(int i = 0; i < VEC_SIZE; i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}
