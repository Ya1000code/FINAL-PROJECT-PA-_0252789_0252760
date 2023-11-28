#ifndef Mascota01_h
#define Mascota01_h

using namespace std;

class Pet01{
public:
string name;
string type;
int age;
int weight;

//Parameterized constructor
Pet01(string name, string type, int age, int weight){
    this->name = name;
    this->type = type;
    this->age = age;
    this->weight = weight;
}
//Destroyer
~Pet01(){
  cout<<"Destroying object (class Pet01)"<<endl;
}
//Getters and setters
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setType(string type){
        this->type = type;
    }
    string getType(){
        return type;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
        void setWeight(int age){
        this->weight = weight;
    }
    int getWeight(){
        return weight;
    }
    //Methods
    void play(){
    cout<<"I like to play with my owner"<<endl;
    }
    void eat(){
     cout<<"I like to eat kibble"<<endl;
    }
};


#endif