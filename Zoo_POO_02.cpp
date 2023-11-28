//Created by Emilio Argueta and Yamil Melendez
//Animal function to create the concert participants
//Date: 22/11/23
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
    Animal(string name, string sound) : name(name), sound(sound) {}

    void makeSound() const {
        cout << name << " says: " << sound << endl;
    }

private:
    string name;
    string sound;
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

    Animal lion("Lion", "Roar");
    Animal monkey("Monkey", "Ooh Ooh Ah Ah");
    Animal parrot("Parrot", "Squawk");

    myZoo.addAnimal(lion);
    myZoo.addAnimal(monkey);
    myZoo.addAnimal(parrot);

    myZoo.performConcert();

    return 0;
}