/*
Title: Overloading constructors and friendly functions
Created by: BY EMILIO ARGUETA MOCTEZUMA Y Y YAMIL ANTONIO MELÉNDEZ MORALES
Date: 22/10/23
Sources: N/A
*/
#include <iostream>
using namespace std;


class Chicken{ //CLASS Chicken
public:
    bool roasted;

    Chicken(){
      roasted=false;
      cout<<"Normal constructor.";
      cout<<endl;
      
    }

    Chicken(bool state){
      roasted=state;
      cout<<"Parameterized constructor.";
      cout<<endl;
    }

    Chicken(Chicken &p){
      roasted=p.roasted;
      cout<<"Contructor copied";
      cout<<endl;
    }

    ~Chicken(){
      cout<<"constructor copy.";
      cout<<endl;
    }
    friend void oven(Chicken &p , float temp);//FUNCTION FRIEND.

};

void oven(Chicken &p , float temp){//FUNCTION FRIEND
  if(temp<200){
    p.roasted=false;
  }else{
    p.roasted=true;
  }
  cout<<"is the chick roasted:"<<p.roasted;
  cout<<endl;
}
int main() {

  Chicken marinated;
  Chicken salty(false);
  Chicken ugly(marinated);

  float temp=220;
  oven(marinated,temp);
}