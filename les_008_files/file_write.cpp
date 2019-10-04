#include <iostream>
#include <fstream>

int main(){
    std::ofstream out_file("output_file.txt");
    for (int i = 0; i < 10; i++) {
        out_file << 2 * i << " ";
    }
    out_file << std::endl;
}
