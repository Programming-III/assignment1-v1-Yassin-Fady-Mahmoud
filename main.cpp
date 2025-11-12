#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


void animal:: display(){
    cout<<"the animal name: "<<name<<endl;
    cout<<"the animal age: "<<age<<endl;
    cout<<"the animal hunger status: "<<isHungry<<endl;
}

void animal:: feed(){
    if(isHungry == true){
        cout<<"the animal is HUNGRY"<<endl;
    }
    cout<<"the animal is not hungry"<<endl;
}

void enclosure:: addAnimal(Animal* a){


}

void enclosure ::displayAnimals(){
    int max;
for(int i =*a[0] ;i<=*a[max]; i++ ){
    cout<<*a[i]<<endl;
}
}


void visitor:: displayInfo(){
    cout<<"the visitor name: "<<visitorName<<endl;
    cout<<"Number of tickets that the visitor bought: "<<ticketsBought<<endl;
    
}


int main(){
enclosure e([5] , 5 , 3);
Animal a1("lion" , 5 , true);
Animal a2("parrot", 2 , false);
Animal a3("snake" , 3 , true , true);
visitor v1("ahmed", 5);


 cout<<"Enclosure 1 Animals: "<< endl;

a1.display;
a2.display;
a3.display;

 cout<<"Visitor Info: "<<endl;
 cout<<"Name: "<< v1.getName <<endl;
 cout<<"Tickets Bought: "<< v1.getTickets <<endl;

}




