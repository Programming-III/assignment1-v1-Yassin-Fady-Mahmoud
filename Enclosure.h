#ifndef ENCLOSURE_H
#define ENCLOSURE_H

class enclosure : public animal{ 
    private:
     Animal *a[]  ;
     int capacity;
     int currentCount;
    
     public:
      enclosure(){

        capacity=0;
        currentCount=0;

      };

      enclosure(Animal*a[], int capacity , int currentCount ){
        this-> Animal*a[]  = Animal*a[] ;
        this -> capacity = capacity;
        this -> currentCount = currentCount; 
      };

      ~enclosure(){};
      
      void addAnimal(Animal* a);
      void displayAnimals();

};



#endif
