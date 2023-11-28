//Created by Emilio Argueta and Yamil Melendez
//Animal function to create the concert participants
//Date: 22/11/23
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
//adding nickname
    Animal(string name, string sound, string nickname) : name(name), sound(sound),nickname(nickname)  {}

    void makeSound() const {
        cout << name <<"("<< nickname<<")" << " says: " << sound << endl;
    }

private:
    string name;
    string sound;
    string nickname;
};

//Zoo function to ad our animals
class Zoo {
public:
    void addAnimal(const Animal& animal) {
        animals.push_back(animal);
    }

    void performConcert() const {
        cout << "Zoo Concert Starting!" << endl;
        for (const auto& animal : animals) {
            animal.makeSound();
        }
        cout << "End of Zoo Concert." << endl;
    }

private:
    vector <Animal> animals;
};

int main() {
    Zoo myZoo;

    Animal lion("Lion", "Roar", "Marty");
    Animal monkey("Monkey", "Ooh Ooh Ah Ah", "Yamil");
    Animal parrot("Parrot", "Squawk", "Manuel");

    //Adition to code by Emilio Argueta
    Animal Elephant("Elephant","UUAAAAH","Emilio");
    Animal snake("snake","hsss", "Eva");

    myZoo.addAnimal(lion);
    myZoo.addAnimal(monkey);
    myZoo.addAnimal(parrot);
    myZoo.addAnimal(Elephant);
    myZoo.addAnimal(snake);
    
    myZoo.performConcert();

    return 0;
}
