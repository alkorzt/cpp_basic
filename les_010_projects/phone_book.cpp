#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    std::string number;
    // Копирующий конструктор
    Person(const Person &p):
        name(p.name),
        number(p.number) {}
    Person() {}
    // Переопределение оператора =
    const Person &operator=(const Person &p){
        name = p.name;
        number = p.number;
        return p;
    }
    void print(){
        std::cout << name << " : " << number << std::endl;
    }
};

int main(){
    std::fstream in_file("in_file.txt");
    std::vector<Person> phone_book;
    while(true){
        Person p;
        in_file >> p.name;
        in_file >> p.number;
        phone_book.push_back(p);
        if(in_file.eof()) break;
    }
    
    while(true){
        std::cout << "Введите имя или слово выход ";
        std::string name;
        std::cin >> name;
        if (name == "выход") break;
        for(int i = 0; i <  phone_book.size(); i++){
            if (phone_book[i].name == name) phone_book[i].print();
        }
    }
}
