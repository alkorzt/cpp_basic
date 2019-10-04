#include <iostream>
#include <fstream>

int main(){
    const int ARR_SIZE = 10;
    int arr[ARR_SIZE];
    std::ifstream in_file("in_file.txt");
    
    for(int i = 0; i < ARR_SIZE; i++){
        in_file >> arr[i];
    }

    for(int i = ARR_SIZE - 1; i >= 1; --i){
        for(int j = 0; j < i; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < ARR_SIZE; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
