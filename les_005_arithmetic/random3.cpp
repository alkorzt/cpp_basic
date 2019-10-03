#include <iostream>

int main(){
	srand(time(0));
	int magic_number = rand() % 100;

    std::cout << magic_number << std::endl;
}
