#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
    private:
     string name;
     int age;
     bool isHungry;

    public:
     Animal(){
        name="";
        age=0;
        isHungry=false;
     };

     Animal(string name , int age , bool isHungry){
        this -> name = name;
        this ->age = age;
        this -> isHungry = isHungry;
     };

     ~Animal(){};
     
     virtual void display();
     void feed(); 
};






#endif
