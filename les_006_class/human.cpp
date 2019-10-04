#include <iostream>
#include <string>

class Human{
public:
    int age;
    std::string name;
    int weight;
    void print(){
        std::cout << "age: " << age << " name: " << name
                  << " weight: " << weight << std::endl;
    }
};

int main(){
    Human person_1, person_2;

    person_1.age = 45;
    person_1.name = "Иван";
    person_1.weight = 65;

    person_2.age = 35;
    person_2.name = "Семен";
    person_2.weight = 75;

    person_1.print();
    person_2.print();
}
