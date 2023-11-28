#include "Mascota01.h"

class Cat: public Pet01{
public:
    string color;
    string nickname;

    //Parameterized constructor
    Cat(string name, string type, int age, int weight, string color, string nickname):
    Pet01(name, type, age, weight){
        this->color = color;
        this->name = nickname;
    }
    //Destroyer
    ~Cat(){
    cout<<"Destroying object (class Cat)"<<endl;
    }

    //Getters and setters
    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color = color;
    }
        string getNickname(){
        return nickname;
    }
    void setNickname(string nickname){
        this->nickname = nickname;
    }
    //Own methods
    void scratchCat(){
        cout<<"I scratch myself because I have lice"<<endl;
    }
    void oldageCat(int age){
        if (this->age>8){
            cout<<"I'm an old Cat"<<endl;
        }
        else{
            cout<<"I'm still a young Cat"<<endl;
        }
    }

};