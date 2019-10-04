#include <iostream>
#include <fstream>

int main(){
    std::ifstream in_file("input_file.txt");
    for (int i = 0; i < 10; i++) {
        int temp;
        in_file >> temp;
        std::cout << temp << std::endl; 
    }
}
