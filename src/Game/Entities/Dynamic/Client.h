#pragma once
#include "Entity.h"
#include "Burger.h"



class Client: public Entity{
    private:
        Burger* burger;
        int originalPatience;
        int patience=2000;
    public:
        Client(){};
        explicit Client(int, int, int, int, ofImage, Burger*);
        virtual ~Client();
        void tick();
        void render();
        virtual int serve(Burger*);
        Client* nextClient=nullptr;
        bool isLeaving = false;
        Burger* getBurger(){return burger;}
        int getPatience(){return patience;}

};