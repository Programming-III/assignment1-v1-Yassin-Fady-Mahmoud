#ifndef VISITOR_H
#define VISITOR_H


class visitor{
    private:
     string visitorName;
     int ticketsBought;

    public:
     visitor(){
        visitorName="";
        ticketsBought=0;
     };

     visitor(string visitorName , int ticketsBought){
        this -> visitorName = visitorName;
        this -> ticketsBought = ticketsBought;
     };

     ~visitor(){};

     string getName(){
        this -> visitorName = visitorName;
     };

     void setName(){
        return visitorName;

     };

     int getTickets(){
        this -> ticketsBought=ticketsBought;
     };
     void getTickets(){
        return ticketsBought;
     };


     void displayInfo(); 

};



#endif
