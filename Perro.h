#include "Mascota01.h"

class Dog: public Pet01{
public:
    string behavior;
    string breed;

    //Parameterized constructor
    Dog(string name, string type, int age, int weight, string behavior, string breed):
    Pet01(name, type, age, weight){
        this->behavior = behavior;
        this->breed = breed;
    }
    //Destroyer
    ~Dog(){
    cout<<"Destroying object (class Dog)"<<endl;
    }

    //Getters and setters
    string getBehavior(){
        return behavior;
    }
    void setBehavior(string behavior){
        this->behavior = behavior;
    }
        string getBreed(){
        return breed;
    }
    void setBreed(string breed){
        this->breed = breed;
    }
    //Own methods
    void scratch(){
        cout<<"I scratch because I have fleas"<<endl;
    }
    void oldAge(int age){
        if (this->age>8){
            cout<<"I'm an old dog"<<endl;
        }
        else{
            cout<<"I'm still a young dog"<<endl;
        }
    }

};