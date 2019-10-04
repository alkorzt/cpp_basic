#include <iostream>

int main(){
    const int ARR_SIZE = 20;    
    int arr[ARR_SIZE];
    
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        arr[i] = i * i;
    }

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        std::cout << i << ":" << arr[i] << std::endl;
    }
}
