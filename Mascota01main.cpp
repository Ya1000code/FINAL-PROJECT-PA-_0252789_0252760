/*
Tittle: Macros and processing directives
Created by: Yamil Antonio Meléndez Morales y Emilio Argueta
Source: https://www.youtube.com/watch?v=5kfYJY-acDE
        sample class code
Date: 12/11/23

Note: The other codes that have .h extension I send them with mail, because in the
in the assignment only let upload .cpp
*/

#include<bits/stdc++.h>
#include "Mascota01.h"
#include "Perro.h"
#include "Gato.h"
//Definition of constants
#define Pi 3.1416
#define E 2.7182 

using namespace std;

int main(){
 //parent class object
    Pet01 pet1 = Pet01("Roger", "Dog", 3, 45 );
    cout<<"My name is: "<<pet1.getName()<<", I am a "<<pet1.getType()<<", I am "<<pet1.getAge()<<" years old"<<", and I weigh "<<pet1.getWeight()<<" kilograms"<<endl;
    pet1.eat();
    //Operation with constant
    float z = pet1.getAge() * Pi; 
    cout<<"Operation: Age * Pi is:"<<z<<endl;
    
//Object of class dog
    Dog dog1 = Dog("Logan", "Dog", 4, 45, "Restless", "Weimaraner" );
    cout<<"My name is: "<<dog1.getName()<<", I am a "<<dog1.getType()<<", I am "<<dog1.getAge()<<"years"<<", I weigh "<<dog1.getWeight()<<"kilograms"<<", I am "<<dog1.getBehavior()<<" and my breed is "<<dog1.getBreed()<<endl;
    dog1.oldAge(4);
    //Operation with constant
    float u = dog1.getWeight()* E;
    cout<<"Operation: weight of dog * e is:"<<u<<endl;


//Object of class cat
    Cat cat1 = Cat("Albert", "Siamese cat", 2, 3, "orange", "Garfield");
    cout<<"My name is: "<<cat1.getName()<<", I am a "<<cat1.getType()<<", I am "<<cat1.getAge()<<" years old"<<", I weigh "<<cat1.getWeight()<<" Kilo"<<", my color is "<<cat1.getColor()<<", I am nicknamed "<<cat1.getNickname()<<endl;
    cat1.scratchCat();
    cout<<endl;
    //Operation with constant
    float w = (cat1.getWeight()) / E;
    cout<<"Operation: cat's weight / E is:"<<w<<endl;

//Defining a TCP operation with a macro
    float x = cat1.getAge();
    #define trinomial(x) (pow(x, 2)+ 2*x + 1);
    cout<<"The new value of x is: "<<trinomial(x);
    cout<<endl;

}