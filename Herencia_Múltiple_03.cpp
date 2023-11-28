
/*Tittle: Multiple Herence
Created by: Emilio Argueta Moctezuma
            Yamil Antonio Meléndez
Date: 10/22/23
*/
#include <iostream>
using namespace std;

//Parent classes
class Pet01{
public:
string name;
string type;
int age;

//Methods
void bark(){
cout<<"Wow wow"<<endl;
}
void eat(){
 cout<<"I like to eat kibble"<<endl;
}
//Constructor.
  Pet01(string name, string type, int age){
  this->name = name;
  this->type = type;
  this->age = age;


}
~Pet01(){
  cout<<"Destroying object (class Pet01)"<<endl;
}
};

class Pet02{
public:
string nickname;
int weight;
string color;

//Methods
void meow(){
cout<<"meow meow"<<endl;
}
void eat(){
 cout<<"Like whiskas"<<endl;
}
Pet02(string nickname, string color, int weight){
this->nickname = nickname;
this->color = color;
this->weight = weight;
}
~Pet02(){
  cout<<"Destroying object (class Pet02)"<<endl;
}
};

//Child classes
class Dog: public Pet01, public Pet02{
public:
string behavior;

//Constructor
Dog(string name, string type, int age, string nickname, string color, int weight, string behavior):
Pet01(name, type, age), Pet02(nickname, color, weight){
  this->behavior = behavior;

}

//Methods
void play(){
  cout<<"I play in the playground"<<endl;
}
//Method to access the eat functions of the parent class.
void eat(){
  Pet01::eat();
  Pet02::eat();
}
//Destructor
~Dog(){
  cout<<"Destroying object (class Dog)"<<endl;
}

};

class Cat :public Pet01, public Pet02{
  public:
  string behavior;

  //Constructor
  Cat(string name, string type, int age, string nickname, string color, int weight, string behavior):
  Pet01(name, type, age), Pet02(nickname, color, weight){
    this->behavior = behavior;}

  ~Cat(){
  cout<<"Destroying object (class Cat)"<<endl;
}

//Methods
void play(){
cout<<"I play inside the house.";
}
//Method to access the eat() function separately.
void eatpedigree(){
  Pet01::eat();
}
void eatwhiskas(){
  Pet02::eat();
}


};


int main() {
  cout<<"Dog object"<<endl;
  Dog Dog01 = Dog ("Logan", "Weimaraner",3, "POl", "Gray", 46, "Restless");
  Dog01.bark();
  Dog01.play();
  Dog01.eat();
  cout<<endl;

  cout<<"Cat object"<<endl;
  
  Cat Cat01 = Cat("Shoe", "Siamese", 4, "Fluff", "Golden", 4, "Floppy");
  Cat01.meow();
  //Access Pet02's eat function
  Cat01.eatwhiskas();
  return 0;
}